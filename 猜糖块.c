#include<stdio.h>
int main()
{
    int n,i,s=0,c;
    scanf("%d",&n);
    c=n;
    for (i=1;i<=n;i++)
    {
        if((c-i*i)<0) break;
        s++;
        c=c-i*i;
    }
    printf("%d",s);
    return 0;
}

