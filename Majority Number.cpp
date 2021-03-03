#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int find(int num[],int n){
    int a=num[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(num[i]==a){
            count++;
        }else{
            if(count>0)
                count--;
            else{
                a=num[i];
                count=0;
            }
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(num[i]==a)
            count++;
    }
    if(count>n/2)
        return a;
    else
        return -1;
}
int main()
{
   int num[1000];
   int n=0;
   char ch;
   int s=0;
   while((ch=getchar())!=EOF&&ch!='\n'){
        if(ch>='0'&&ch<='9'){
            s=s*10+(ch-'0');
        }else{
            num[n++]=s;
            s=0;
        }
   }
   num[n++]=s;
   cout<<find(num,n)<<endl;


}
