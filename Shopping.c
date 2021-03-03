#include<stdio.h>
int a[100003];
int main()
{
    int l,h,t,x,n,j,i,s=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(i==1)
            {
                l=h=a[1];
            }
            if(l>a[i])
                l=a[i];
            if(h<a[i])
                h=a[i];
        }
        printf("%d\n",(h-l)*2);
    }
    return 0;
}
