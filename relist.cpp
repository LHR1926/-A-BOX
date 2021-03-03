#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> str;
    int i,n,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        str.push(t);
    }
    while(!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }
    return 0;

}

