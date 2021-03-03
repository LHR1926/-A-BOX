#include <iostream>
#include"SGraph.cpp"
using namespace std;

int main()
{
    SGraph<int> p;
    p.Fun(0);
    p.Dijkstra(0);
    p.show();
    return 0;
}
