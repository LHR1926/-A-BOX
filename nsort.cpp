#include <iostream>

using namespace std;

int main()
{
    int T,i,j,N,t,sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>N;
        int data[N];
        for(i=0;i<N;i++)
        {
            cin>>data[i];
        }
        for(i=0;i<N-1;i++)
        {
            for(j=0;j+i<N-1;j++)
            {
                if(data[j]>data[j+1])
                {
                    t=data[j];
                    data[j]=data[j+1];
                    data[j+1]=t;
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
