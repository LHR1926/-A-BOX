#include <iostream>

using namespace std;

void fun (int p,int q,int a[])
{
    int n=0;
    for(int i=0;i<p-1;i++)
        n=n+a[i];
    n=n+q;
    cout<<n<<endl;
}
int main()
{
    int y,m,d;
    cin>>y>>m>>d;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((y%100!=0&&y%4==0)||(y%400==0))
        a[1]=29;
    fun(m,d,a);
    return 0;
}

