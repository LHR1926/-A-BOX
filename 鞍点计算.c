#include<stdio.h>
int main()
{
    int m,n,i,j,k,d,h=0,arr[100][100];
    scanf("%d %d",&m,&n);
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
        scanf("%d",&arr[j][i]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(arr[i][j]>arr[k][j])
                break;
        }
        for(d=0;d<n;d++)
        {
            if(arr[i][j]<arr[i][d])
                break;
        }
        if( (k==m) && (d==n) )
        {
            printf("Array[%d][%d]=%d",i,j,arr[i][j]);
            h++;
        }
    }
    if(h==0)
        printf("None");
}
