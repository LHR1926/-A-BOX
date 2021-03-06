#include<stdio.h>
int main()
{
    int n,m,i,a[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=n-m+1;i<=n;i++)
        printf("%d ",a[i]);
    for(i=1;i<n-m+1;i++)
    {
        printf("%d",a[i]);
        if(i!=n-m+1)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
