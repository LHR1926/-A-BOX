#include<iostream>
#include<cstdio>
using namespace std;
struct Node
{
    double num;
    int times;
    struct Node* next;
};
void addNode(Node* head,double n,int t)
{
    Node* p = head;
    if(p!=NULL)
    {
        Node* pnew = new Node;
        pnew->num=n;
        pnew->times=t;
        pnew->next = p->next;
        p->next = pnew;
    }
}
void mergeList(Node* h1,Node* h2,Node* h3)
{
    Node* p1 = h1->next;
    Node* p2 = h2->next;
    Node* p3 = h3;
    while(p1&&p2)
    {
        if(p1->times == p2->times)
        {
            p1->num = p1->num+p2->num;
            p3->next = p1;
            p1 = p1->next;
            p2 = p2->next;
            p3 = p3->next;
        }
        else if(p1->times < p2->times)
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        else if(p2->times < p1->times)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        else
        {
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    if(p1 == NULL)
    {
        p3->next = p2;
    }
    if(p2 == NULL)
    {
        p3->next = p1;
    }
}
void display(Node* head)
{
    Node * p = head->next;
    while(p)
    {
        printf("%.1lf %d\n",p->num,p->times);
        p = p->next;
    }
}
int main()
{
    Node* head1 = new Node;
    Node* head2 = new Node;
    Node* head3 = new Node;
    head1->next = NULL;
    head2->next = NULL;
    head3->next = NULL;
    double num;
    int times,N;
    while(cin>>num>>times,cin.get()!='\n')
    {
        addNode(head1,num,times);
    }
    addNode(head1,num,times);
    while(cin>>num>>times,cin.get()!='\n')
    {
        addNode(head2,num,times);
    }
    addNode(head2,num,times);
//    display(head1);
//    display(head2);
    mergeList(head1,head2,head3);
//    display(head3);
    cin>>N;
    Node* p = head3->next;
    while(N-1)
    {
        N--;
        p = p->next;
    }
    while(p->num == 0) p = p->next;
    printf("%.1lf %d\n",p->num,p->times);
    return 0;
}
