#include<stdio.h>
int main()
{
    int h1,h2,h3,m1,m2,m3,s1,s2,s3,t1,t2,t3;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    t1=3600*h1+60*m1+s1;
    t2=3600*h2+60*m2+s2;
    t3=abs(t1-t2);
    h3=t3/3600;
    m3=(t3-3600*h3)/60;
    s3=t3-3600*h3-60*m3;
    printf("%.2d:%.2d:%.2d",h3,m3,s3);
    return 0;
}
