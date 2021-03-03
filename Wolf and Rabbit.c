#include<stdio.h>
int P,i;
long int n,m,x,f,t,j,k=0;
int f1(long int a,long int b)
{

    int i;
    x=a%b;
    for(i=1;i<=5;i++)
    {
        if(x==0)
            return 0;
        a=n%(a+x);
        if(a==0)
            return 1;
        x=a%b;
    }
    return 1;
}
int main()
{
    scanf("%d",&P);
    for(i=1;i<=P;i++)
    {
        scanf("%ld%ld",&m,&n);
        t=(m>n?n:m);
        if(n==1)
            goto aa;
        for(j=1;j<t;j++)
        {
            if(j%m==0)
                continue;
            k=f1(j,m);
            if(k==1)
                goto aa;
        }
    aa: if(k==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
