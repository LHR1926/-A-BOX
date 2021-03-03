#include<stdio.h>
int main()
{
    long int n,s,num=0,x,y;
    scanf("%ld%ld",&n,&s);
    if(s<n)
        x=0;
    else
        x=s/n;
    if(s%n!=0)
        x++;
    printf("%ld",x);
    return 0;
}
