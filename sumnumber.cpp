#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int i,j,y,n,k,h,p,lena,lenb;
int a[1000],b[1000],sum[1000];
int main()
{
    string a1,b1;
    cin>>a1>>b1;
	lena=a1.length();
	lenb=b1.length();
	for(i=0;i<1000;i++)
	{
		a[i]=0;b[i]=0;sum[i]=0;
	}
	for(i=lena-1;i>=0;i--)
	    a[lena-1-i]=a1[i]-'0';
	for(i=lenb-1;i>=0;i--)
	    b[lenb-1-i]=b1[i]-'0';
	   k=0;
	for(i=0;i<lenb||i<lena;i++)
	{
		h=a[i]+b[i]+k;
		sum[i]=h%10;
		k=h/10;
	}
	if(k!=0)
	    sum[i++]=k;
	p=0;
	for(j=i-1;j>=0;j--)
	{
	 	if(p==0&&sum[j]==0)
	 	{
	 	    continue;
	 	}
	 	else
	 	{
	 	    p=1;
	 	    cout<<sum[j];
	 	}
	}
	cout<<endl;
    return 0;
}
