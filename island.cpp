#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
typedef long long LM;
using namespace std;

int n;
double m[55][55];

struct node{
	int x, y, num;
}a[55];

double dist[55],tim[55];
int vis[55];
int people_num;

void pri(){
	for (int i = 1; i <= n; i++)
    {
		dist[i] = m[i][1];
		vis[i] = 1;
	}
	vis[1] = -1;
	tim[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		double mins = 1.0 * 0x3f3f3f3f;
		int v = -1;
		for (int j = 1; j <= n; j++)
		{
			if(vis[j] != -1 && mins > dist[j])
			{
				mins = dist[j];
				v = j;
			}
		}
		if(v != -1)
		{
			if(dist[v] <= tim[vis[v]])
			{
				tim[v] = tim[vis[v]];
			}
			else
            {
				tim[v] = dist[v];
			}
		}
		vis[v] = -1;
		for (int j = 1; j <= n; j++)
        {
			if(vis[j] != -1 && dist[j] > m[v][j])
			{
				dist[j] = m[v][j];
				vis[j] = v;
			}
		}
	}
}

void Fun(){
	double sum = 0;
	for (int i = 1; i <= n; i++)
    {
		sum += tim[i] * a[i].num;
	}
	printf("%.2lf\n", sum / people_num);
}

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
    {
		scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].num);
		people_num += a[i].num;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			m[i][j] = m[j][i] = sqrt((double)((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y)));
		}
	}
	pri();
	Fun();
	return 0;
}


