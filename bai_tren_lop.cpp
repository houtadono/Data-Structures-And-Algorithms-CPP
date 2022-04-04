#include <bits/stdc++.h>
using namespace std;
struct TNode{
    int val;
    struct TNode* pLeft;
    struct TNode* pRight;
};

TNode *creat_node(int x){
    TNode *p;
    p->val=x;
    p->pLeft=p->pRight=NULL;
    return p;
}

int main()
{
    TNode *p0,*p1,*p2,*p3,*p4;
    p0->val=6;
    p0->pLeft=p1;
    p0->pRight=p2;
    p1->val=4;
    p2->val=9;
    p1->pRight=p3;
    p3->val=5;
    p2->pLeft=p4;
    p4->val=8;
}