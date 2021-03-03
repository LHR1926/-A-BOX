#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,e,x;
    scanf("%d",&n);
    a=b=c=d=e=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>=90) a++;
        else if(x>=80) b++;
        else if(x>=70) c++;
        else if(x>=60) d++;
        else e++;
    }
    printf("A %d\n",a);
    printf("B %d\n",b);
    printf("C %d\n",c);
    printf("D %d\n",d);
    printf("E %d\n",e);
    return 0;
}

