#include <iostream>
using namespace std;
void dsort(int b[],int n)
{
    int i,t,flag,low,high;
    low = 0;
    high = n-1;
    while(low<high)
    {
        flag=0;
        for(i=low;i<high;i++)
        {
            if(b[i]>b[i+1])
            {
                t=b[i];
                b[i]=b[i+1];
                b[i+1]=t;
                flag=1;
            }
        }
        if(!flag)
            break;
        high--;
        for(i=high;i>low;i--)
        {
            if(b[i]<b[i-1])
            {
                t=b[i];
                b[i]=b[i-1];
                b[i-1]=t;
            }
        }
        low++;
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
    int T,i,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int data[n];
        for(i=0;i<n;i++)
        {
            cin>>data[i];
        }
        dsort(data,n);
    }
    return 0;
}
