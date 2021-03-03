#include<stdio.h>
int cmp(const void* _a,const void* _b)
{
    int* a=(int*)_a;
    int* b=(int*)_b;
    return *a - *b;
}
void f(int n)
{
    int max,f,x,i,a[100000],b[10000],s=1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(i==1)
            max=b[s-1]=a[1];
        qsort(b,s,sizeof(b[0]),cmp);
            if(a[i]>max)
                for(x=0;x<=s;x++)
                    if(a[i]<b[s])
                        {
                            max=b[s]=a[i];
                            f=1;
                            break;
                        }
                    if(f!=1)
                        {
                            s++;
                            b[s]=a[i];
                        }
    }
    printf("%d\n",s-2);
}
int main()
{
    int n;

    while( scanf("%d",&n)!=EOF )
    {
        f(n);
    }
    return 0;
}
