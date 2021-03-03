#include<stdio.h>
int main()
{
    int a,n,i,s,t;
    scanf("%d",&a);
    scanf("%d",&n);
    s=t=a;
    for(i=1;i<n;i++)
    {
        a=a*10+t;
        s=s+a;
    }
    printf("%d",s);
    return 0;
}
