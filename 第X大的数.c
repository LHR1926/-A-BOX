#include<stdio.h>
int main()
{
    int n,m,x,i,j,t,a[100010];
    while( ~scanf("%d",&n) )
    {
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i=1;i<=n;i++)
            for(j=1;j<=n-i;j++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i+1];
                    a[i+1]=a[i];
                    a[i]=t;
                }
            }
        for(i=1;i<=m;i++)
        {
            scanf("%d",&x);
            printf("%d\n",a[n-x+1]);
        }
    }
    return 0;
}
/*
#include<stdio.h>
#include<stdlib.h>

int f(int a[],int low,int high)
{
    int x=a[low];
    while(low<high)
    {
        while(low<high&&a[high]<=x)
            high--;
        a[low]=a[high];
        while(low<high&&a[low]>=x)
            low++;
        a[high]=a[low];
    }
    a[low]=x;
    return low;
}

void sort(int a[],int left,int right)
{
    int m;
    if(left<right)
    {
        m=f(a,left,right);
        sort(a,left,m-1);
        sort(a,m+1,right);
    }
}

int main()
{
    int n,i,m,x;
    int a[100010];
    while( ~scanf("%d",&n) )
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,0,n-1);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&x);
            printf("%d\n",a[x-1]);
        }
    }
    return 0;
}
*/
