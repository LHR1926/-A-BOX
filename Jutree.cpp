#include<iostream>
using namespace std;
struct BiNode
{
    int data;
    BiNode *rchild,*lchild;
};
class BiSortTree
{
public:
    BiSortTree()
    {
        root=creat();
        flag=true;
        p=-256;
    }
    bool IsBST()
    {
        return IsBST(root);
    }
    void InOrder()
    {
        InOrder(root);
    }
private:
    BiNode*creat();
    bool IsBST(BiNode*bt);
    void InOrder(BiNode*bt);
    BiNode*root;
    int  flag ;
    int p;
};
BiNode*BiSortTree::creat()
{
    int a;
    BiNode *bt;
    cin>>a;
    if(a==-1)
    {
        bt=NULL;
    }
    else
    {
        bt=new BiNode;
        bt->data=a;
        bt->lchild=creat();
        bt->rchild=creat();
    }
    return bt;

}
bool BiSortTree::IsBST(BiNode*bt)
{
    if(bt->lchild!=NULL&&flag)
    {
        IsBST(bt->lchild);
    }
    if(p>bt->data)
        flag=false;
    p=bt->data;
    if(bt->rchild!=NULL&&flag)
    {
        IsBST(bt->rchild);
    }
    return flag;
}
void BiSortTree::InOrder(BiNode*bt)
{
    if(bt==NULL)
        return;
    else
    {
        InOrder(bt->lchild);
        cout<<bt->data;
        InOrder(bt->rchild);
    }
}
int main()
{
    BiSortTree bst;
    if(bst.IsBST())
        cout<<"YES";
    else
        cout<<"NO";
}
