#include<iostream>
using namespace std;
int cnt=0;
void Search(int low,int high,int data[],int key)
{
    if(low >high)
        return;
    int mid=(low+high)/2;
    cnt++;
    if(key<data[mid])
    {
        Search(low,mid-1,data,key);
    }
    else if(key>data[mid])
    {
        Search(mid+1,high,data,key);

    }
}
int main()
{
    int n,i,key;
    cin>>n;
    int data[n];
    for(i=1;i<=n;i++)
    {
        cin>>data[i];
    }
    cin>>key;
    Search(1,n,data,key);
    cout<<cnt<<endl;
}
