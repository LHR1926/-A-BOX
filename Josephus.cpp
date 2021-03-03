#include <iostream>

using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
class JosephRing
{
public:
    JosephRing(int n);
    void Joseph(int ,int );
private :
    Node *rear;
};
JosephRing::JosephRing(int n)
{
    Node* s =NULL;
    rear = new Node;
    rear->data=1;
    rear->next=rear;
    for(int i=2 ; i<=n;i++)
    {
        s=new Node;
        s->data=i;
        s->next=rear->next;
        rear->next=s;
        rear=s;
    }
}
void JosephRing::Joseph(int m,int k)
{
    Node *pre =rear,*p=rear->next;
    int count = 1;
    while (count < k)
    {
        pre=p;
        p=p->next;
        count++;
    }
    count = 1;
    while(p->next!=p)
    {
        if(count<m)
        {
            pre=p;
            p=p->next;
            count++;
        }
        else
        {
            pre->next=p->next;
            delete p;
            p=pre->next;
            count = 1;
        }
    }
    cout<<p->data<<" ";
    delete p;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    JosephRing R(n);
    R.Joseph(m,k);
    return 0;
}

