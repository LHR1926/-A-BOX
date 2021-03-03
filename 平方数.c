#include<stdio.h>
#include<math.h>
void squ(int x,int y)
{
    int i,j,s=0;
    for(i=x;i<=y;i++)
    {
        j=sqrt(i);
        if(i==j*j)
           s=s+i;
    }
    printf("%d\n",s);

}
int main()
{
    int t,i,n,m,z;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        if(n > m)
        {
            z = n;
            n = m;
            m = z;
        }
        squ(n,m);
    }
    return 0;
}
