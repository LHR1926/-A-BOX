#include<stdio.h>
#include<string.h>
/*int cmp(const void* _a,const void* _b)
{
    int* a=(int*)_a;
    int* b=(int*)_b;
    return *a - *b;
}
int main()
{
	int i,n,s[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }
    qsort(s,n,sizeof(s[0]),cmp);
    printf("%d %d",s[1],s[n-1]);
	return 0;
}
*/
int main()
{
    printf("%d",1/2);
    return 0;
}
int flag=0;
	int i, j, k, c, min;
	 for(i = 1; i <= n; i++)
    {
        min = A[i][1];
        c = 0;
        for(j = 1; j <= m; j++)
        {
            if(A[i][j] < min)
            {
                min = A[i][j];
            }
        }
		for(int j=1;j<=m;j++)
		{
		if(A[i][j]==min)
			c=j;
		else
			continue;
        for(k = 1; k <=n; k++)
            if(A[k][c] > min)
         	     break;
        if(k == n+1)
        {
            cout<<A[i][c]<<" "<<i<<" "<<c<<endl;
            flag=1;
        }
    	}
    }
	if(flag==0)
		cout<<"No answer";

int i=0,j=-1;
	next[0]=-1;
	while(i<length)
	{
		if(j==-1||T[i]==T[j])
			next[++i]=++j;
		else
			j=next[j];
	}

int i=pos;
    int j=0;
    while(i<sLen&&j<tLen)
    {
        if(S[i]==T[j]||j==-1)
            {
                i++;
                j++;
            }
        else
            j=next[j];
    }
    if(j==tLen)
        return i-tLen+1;
    else
        return 0;
