#include<stdio.h>
#include<string.h>
int encry(int x)
{
	int s=0;
	while(x>0)
	{
		s+= x % 10;
		x = x / 10;
	}
	return s;
}
int main()
{
	int a[6],i,j,n,l;
	char str[100],c;
	scanf("%d%c",&n,&c);
	for(i=0;i<n;i++)
        {
            scanf("%s",str);
            for(j=0;j<=5;j++)
                {
                    a[j]=0;
                }
            l=strlen(str);
            for(j=0;j<l;j++)
                {
                    a[j%6]+=str[j];
                }
            for(j=0;j<=5;j++)
                {
                    while(a[j]>=10)
                        a[j]=encry(a[j]);
                }
            for (j=0;j<=5;j++)
                    printf("%d",a[j]);
            printf("\n");
        }
	return 0;
}
