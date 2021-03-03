#include <iostream>
using namespace std;
int c;
int fun(int Arr[],int low,int high)
{
    Arr[0]=Arr[low];
    int fr=Arr[low];
    while(low < high)
    {
        while(low<high && Arr[high]>=fr)
            --high;
        if(low<high)
        {
            Arr[low]=Arr[high];
            c++;
        }
        while(low<high && Arr[low]<=fr)
            ++low;
        if(low<high)
        {
            Arr[high]=Arr[low];
            c++;
        }
    }
    Arr[low]=Arr[0];
    return low;
}

void Qsort(int Arr[],int low,int high)
{

    if(low>=high)
        return;
    else
    {
        int ft=fun(Arr,low,high);
        Qsort(Arr,low,ft-1);
        Qsort(Arr,ft+1,high);
    }
}

void QuickSort(int Arr[],int n)
{
    Qsort(Arr,1,n);
}


int main()
{
    int T,n,i;
    cin>>T;
    while(T--)
    {
        c=0;
        cin>>n;
        int data[n+1]= {0};
        for(i=1; i<=n; i++)
            cin>>data[i];
        QuickSort(data,n);
        cout<<c<<endl;
    }
    return 0;
}
