#include <iostream>
using namespace std;
void fun(int arr[],int n,int i)
{
    int lchlid=i*2+1,rchild=i*2+2,max = i;
    if(lchlid<n&&arr[lchlid]>arr[max])
        max=lchlid;
    if(rchild<n&&arr[rchild]>arr[max])
        max=rchild;
    if(max!=i)
    {
        swap(arr[max],arr[i]);
        fun(arr,n,max);
    }
}

void hsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        fun(arr,n,i);
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1,j=n-1;i>=1;i--,j--)
    {
        swap(arr[0],arr[i]);
        fun(arr,i,0);
        for(int i=0;i<j;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    hsort(arr,n);
}
