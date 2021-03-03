#include <iostream>
using namespace std;
int fun(int n,char s[],int b);

int main()
{
    int n, b, m;
    char s[1001];
    cin >> n >> b;
    if( b<=1 || b>=37 )
        return 0;
    m = fun(n,s,b);
    if( m == 1 )
        cout << "-" << s << endl;
    else
        cout << s << endl;
}
int fun(int n,char s[],int b)
{
    int i=0,j,k;
    char t;
    bool f=0;
    if(n<0)
    {
        n=-n;
        f=1;
    }
    do
    {
        j = n%b;
        s[i++] = ( (j <= 9) ? j+'0' : j+'a'-10 );
    }
    while((n/=b) > 0);
    s[i--]='\0';
    for(k=0;k<i;k++,i--)
    {
        t=s[k];
        s[k]=s[i];
        s[i]=t;
    }
    return f;
}

