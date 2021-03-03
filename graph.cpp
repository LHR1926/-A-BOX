#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int s=0,x,n,m,arr[101];
	char a,b;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>x;
		arr[a-'A']++;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			s++;
	 }
	cout<<s;
 }
