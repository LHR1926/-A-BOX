#include<stdio.h>
int n,i,j,y,m,d,t;
int leapyear(int a)
{
    if( ( (a%4==0&&a%100!=0)||(a%400==0) )&&(m>=2) )
        return 1;
    else
        return 0;
}
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&y,&m,&d);
        t=0;
        for(j=1;j<=m;j++)
            switch(j)
            {
                case 3: t+=28;break;
                case 5:case 7:case 10:case 12: t+=30; break;
                case 2:case 4:case 6:case 8:case 9:case 11:case 13: t+=31; break;
            }
      t+=leapyear(y)+d;
      printf("%d\n",t);
    }
    return 0;
}
