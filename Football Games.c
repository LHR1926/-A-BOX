#include<stdio.h>
int f(int n)
{
    int x,B[20001],a[20001],b[20001];
    int i,s=0;
    x=n*(n-1)/2;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&B[i]);
        s=s+B[i];
    }
    if(s!=n*2)
        return 0;
}
int main()
{
    int M;
    int i,n;
    int t;
    scanf("%d",&M);
    for(i=1;i<=M;i++)
    {
        scanf("%d",&n);
        t=f(n);
        if(t==1)
            printf("T");
        else
            printf("F");
    }
    return 0;
}
