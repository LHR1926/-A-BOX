#include<stdio.h>
int cmp(char a[],char b[])
{
    int i,j;
    for(i=0,j=0; a[i]!='\0'&&b[i]!='\0'; ++i,++j)
        if(a[i][]!=b[i][])
            return 0;
    return 1;
}
int main()
{
    int n,flag,i,j;
    char a[1000][1000];
    while(scanf("%d",&n)&&n)
    {
        flag=1;
        for(i=0; i<n; ++i)
            scanf("%d",&a[i][]);
        for(i=0; i<n&&flag; ++i)
            for(j=i+1; j<n&&flag; ++j)
            {
                if(cmp(a[i],a[j]))
                {
                    flag=0;
                    printf("NO\n");
                    break;
                }
            }
        if(flag)
            printf("YES\n");
    }
    return 0;
}
