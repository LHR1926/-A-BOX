#include<iostream>
using namespace std;
void Insert (int maxS,int divi,int k,int ht[])
{
    int j,i;
    j=k%divi;
    if(ht[j]==0)
        ht[j]=k;
    else if(ht[j]!=0)
    {
        i=j;
        while(ht[i]!=0)
        {
            i=(i+1)%maxS;
        }
        ht[i]=k;
    }
}
int Search (int maxS,int divi,int k,int ht[])
{
    int j;
    j=k%divi;
    int i=j;
    int cnt=0;
    while(ht[i]!=0&&cnt<maxS)
    {
        cnt++;
        if(ht[i]==k)
            return i;
        else
        {
            i=(i+1)%maxS;
        }
    }
    return -1;
}
int main()
{
    int maxS,divi,n,k;
    cin>>maxS>>divi;
    cin>>n;
    int ht[maxS]={0};
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int k=0;k<n;k++)
    {
        Insert(maxS,divi,a[k],ht);
    }
    cout<<Search(maxS,divi,k,ht)<<endl;

}
