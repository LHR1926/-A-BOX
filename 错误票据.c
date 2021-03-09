#include <stdio.h>
int main()
{
    int n,i,t,min=100001,max=0,a[100001];
    for(i=0;i<100001;i++)
    {
        a[i] = 0;
    }
    scanf("%d",&n);
    for(i=0;i<=n; )
    {
        t = getchar();
        if( (t >= '0') && (t <= '9') )
        {
            ungetc(t,stdin);
            scanf("%d", &t);
            a[t]++;
            if( t < min )
                min = t;
            if( t > max )
                max = t;
        }
        else if( t == '\n' )
            i++;
    }
    for(i=min;i<max+1;i++)
    {
        if(a[i] == 0)
            printf("%d ",i);
        if(a[i] == 2)
            printf("%d\n",i);
    }
    return 0;
}
