#include <iostream>
#include <cstdio>
using namespace std;
int sum[5005];
int main()
{
    int N;
    sum[0] = 0;
    while(cin>>N)
    {
        bool flag = true;
        for(int i=1;i<=N/2+1;i++)
        {
            sum[i]=i+sum[i-1];
            if(sum[i]>=N)
            {
                for(int j = i; sum[j] >= sum[i]-N && j>=0; j--)
                {
                    if(sum[i]-N==sum[j])
                    {
                        flag = false;
                        for(int k = j+1; k<=i; k++)
                            cout<<k<<" ";
                        cout<<endl;
                    }
                }
            }
        }
        if(flag)
            cout<<"NONE"<<endl;
    }
    return 0;
}
