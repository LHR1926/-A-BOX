#include<stdio.h>
int main()
{
    int x,n,a[1000];
    scanf("%d",&n);
    x=n;
    int i,t;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=x+1;i<=x+n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n+x;i++)
    {
        int j;
        for(j=1;j<n+x-i+1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=1;i<=x+n;i++)
    {
        if(a[i]==a[i+1]||a[i]==a[i-1])
            ;
        else
            printf("%d ",a[i]);
    }
    return 0;
}
