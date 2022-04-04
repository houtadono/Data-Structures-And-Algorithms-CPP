#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten;
    float tb;
    int ma; 
    string loai;
};
string xeploai(float x){
    if(x>=9) return "Xuat Sac";
    if(x>=8) return "Gioi";
    if(x>=7) return "Kha";
    if(x>=6.5) return "Trung binh kha";
    if(x>=5) return "Trung binh";
    return "Yeu";
}
struct Node{
    SinhVien *data;
    struct Node *pNext;
};
struct LIST{
    Node *pHead;
    Node *pTail;
};
void Create_List(LIST *&l){
    l=new LIST;
    l->pHead=NULL;
    l->pTail=NULL;
}
SinhVien* NhapSinhVien(){
    SinhVien *sv=new SinhVien;
    cout<<"-Nhap MSSV: ";
    cin>>sv->ma;
    cin.ignore();
    cout<<"-Nhap ho va ten: ";
    getline(cin,sv->ten);
    cout<<"-Nhap diem trung binh: ";
    cin>>sv->tb;
    sv->loai=xeploai(sv->tb);
    return sv;
}
Node* CreateNode(SinhVien *sv){
    Node*p = new Node;
    p->data=sv;
    p->pNext=NULL;
    return p;
}
void AddHead(LIST *&l, Node *p){
    
    if(l->pHead==NULL){
        l->pHead=p;
        l->pTail=l->pHead;
    }else{
        p->pNext=l->pHead;
        l->pHead=p;
    }
}
void Remove(LIST *&l,int x){
    Node *p=l->pHead;
    if(p==NULL){
        cout<<"Danh sach sinh vien rong!\n";
        return;
    }
    Node *pTrc=NULL;
    while(p!=NULL){
        SinhVien *sv=p->data;
        if(sv->ma==x) break;
        pTrc=p;
        p=p->pNext;
    }
    if(p==NULL){
        cout<<"Khong tim thay sinh vien co MSSV: "<<x<<endl;
        return;
    }
    if(p==l->pHead){
        l->pHead=l->pHead->pNext;
        p->pNext=NULL;
        delete p;
        p=NULL;
    }else{
        pTrc->pNext=p->pNext;
        p->pNext=NULL;
        delete p;
        p=NULL;
    }
    cout<<"Da xoa thanh cong sinh vien co MSSV: "<<x<<endl;
}
void PrintList(LIST *l,bool xl){
    cout<<"----------------------------------------------";
    if(xl) cout<<"----------------";
    cout<<endl;
    cout<<"|"<<setw(9)<<"MSSV"<<"|"<<setw(18)<<"Ho va ten|";
    cout<<setw(16)<<"Diem trung binh"<<'|';
    if(xl) cout<<setw(15)<<"Xep loai"<<'|';
    cout<<endl;
    cout<<"----------------------------------------------";
    if(xl) cout<<"----------------";
    cout<<endl;
    for(Node *p=l->pHead; p!=NULL;p=p->pNext){
        SinhVien *sv=p->data;
        cout<<"|"<<setw(9)<<sv->ma<<"|";
        cout<<setw(17)<<sv->ten<<"|";
        cout<<setw(16)<<sv->tb<<"|";
        if(xl) cout<<setw(15)<<sv->loai<<"|";
        cout<<endl;
    }
    cout<<"----------------------------------------------";
    if(xl) cout<<"----------------";
    cout<<endl;
}
void diemtb5(LIST *l){
    Node*p=  l->pHead;
    if(p==NULL){
        cout<<"Danh sach sinh vien rong!\n";
        return;
    }
    int kt=1;
    LIST *tmp;
    Create_List(tmp);
    for(; p!=NULL;p=p->pNext){
        SinhVien *b=p->data;
        if(b->tb>=5){
            kt=0;
            Node *ppp=CreateNode(b);
            AddHead(tmp,ppp);
        }
    }
    if(kt=0){
        cout<<"Khong co sinh vien nao co diem trung binh lon hon bang 5\n";
        return;
    }
    Node*cur= tmp->pHead;
    Node*prev=NULL, *next=NULL;
    while(cur!=NULL){
        next=cur->pNext;
        cur->pNext=prev;
        prev=cur;
        cur=next;
    }
    tmp->pHead =prev;
    cout<<"----------------------------------------------\n";
    cout<<"|         Danh sach sinh vien co             |\n";
    cout<<"|       diem trung binh lon hon bang 5       |\n";
    PrintList(tmp,false);
}
int main()
{ 
    LIST *list;
    Create_List(list);
    system("cls");
    while(1){
        cout<<"------------------------Menu----------------------------\n";
        cout<<"|1.Nhap thong tin sinh vien vao dau danh sach.         |\n";
        cout<<"|2.Tim 1 sinh vien co trong lop hoc.                   |\n";
        cout<<"|3.Xoa 1 sinh vien co MSSV x.                          |\n";
        cout<<"|4.Liet ke sinh vien co diem trung binh lon hon bang 5.|\n";
        cout<<"|5.Xep loai va in ra thong tin tung sinh vien.         |\n";
        cout<<"|6.Dung.                                               |\n";
        cout<<"--------------------------------------------------------\n";
        cout<<"Lua chon: ";
        int chon; cin>>chon;
        system("cls");
        if(chon==1){
            while(1){
                cout<<"Nhap thong tin sinh vien:\n";
                SinhVien *a=NhapSinhVien();
                if(a->ten=="") break;
                Node *p=CreateNode(a);
                AddHead(list,p);
                cout<<"Nhap thong tin sinh vien tiep theo(y/n): ";
                char c; cin>>c;
                cout<<endl;
                if(c=='n') break;
            }
        }else if(chon==2){
            cout<<"Nhap thong tin sinh vien can tim: \n";
            int kt=0;
            SinhVien *a=NhapSinhVien();
            for(Node *p=list->pHead; p!=NULL;p=p->pNext){
                SinhVien *b=p->data;
                if(b->ma==a->ma&&b->tb==a->tb&&b->ten==a->ten){
                    kt=1;
                    break;
                }
            }
            if(kt) cout<<"Sinh vien tren co trong lop hoc.\n";
            else cout<<"Sinh vien tren khong co trong lop hoc.\n";
        }else if(chon==3){
            cout<<"Nhap MSSV can xoa:";
            int x; cin>>x;    
            Remove(list,x);
        }else if(chon==4){
            diemtb5(list);
        }else if(chon==5){
            cout<<"--------------------------------------------------------------\n";
            cout<<"|                     Danh sach sinh vien                    |\n";
            PrintList(list,true);
        }else{
            cout<<"Dung chuong trinh.\n";
            break;
        } 
        cout<<"\nNhap bat ki de tiep tuc.......";
        getchar();getchar();
        system("cls");
    }
}
        