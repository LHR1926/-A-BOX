#include<stdio.h>
#include<string.h>
int s=0,a[1005][3];
void fadd(int r,int l)
{
    s++;
    a[s][1]=r;
    a[s][2]=l;
}
void fremove(int r,int l)
{
    int i;
    for(i=1;i<=s;i++)
    {
        if(a[i][1]==r&&a[i][2]==l)
        {
            a[i][1]=-1;
            a[i][2]=-1;
        }
    }
}
void ffind(int r,int l)
{
    int i,er,el,f;
    er=el=1073741825;
    for(i=1;i<=s+1;i++)
    {
        if(a[i][1]>=r&&a[i][1]<=er)
            if(a[i][2]>=l&&a[i][2]<=el)
            {
                er=a[i][1];
                el=a[i][2];
                f=1;
            }
    }
    if(f!=1)
        printf("-1\n");
    else
        printf("%d %d\n",er,el);
}
int main()
{
    int h1,h,t,j,n,r,l,x=0;
    char c[5];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        x++;
        printf("Case %d:\n",x);
        for(j=1;j<=n*2;j++)
        {
            scanf("%s",&c);
            scanf("%d%d",&r,&l);
            if(c[0]=='a')
                fadd(r,l);
            else if(c[0]=='r')
                fremove(r,l);
            else if(c[0]=='f')
                ffind(r,l);
        }

    }
    return 0;
}
