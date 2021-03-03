#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 1004;
const double MAX = 0x7f7f7f7f;

int n;
double a[maxn][maxn],d[maxn], ans;
bool visit[maxn];

typedef struct
{
    int x;
    int y;
    int h;
} point;

point p[maxn];

void init()
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
            a[i][j] = MAX;
        d[i] = MAX;
    }
}

void Prim()
{
    memset(visit, 0, sizeof(visit));
    d[1] = 0;
    for(int i = 1; i < n; i++)
    {
        int x = 0;
        for(int j = 1; j <= n; j++)
            if(!visit[j] && (x == 0 || d[j] < d[x])) x = j;
        visit[x] = 1;
        for(int y = 1; y <= n; y++)
            if(!visit[y]) d[y] = min(d[y], a[x][y]);
    }
}


int main(void)
{
    cin>>n;
    init();
    for(int i = 1; i <= n; i++)
        scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].h);

    for(int i = 1; i <= n - 1; i++)
        for(int j = i + 1; j <= n; j++)
        {
            double temp = sqrt( (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y-p[j].y) * (p[i].y-p[j].y)) + (p[i].h-p[j].h) * (p[i].h-p[j].h);
            a[i][j] = a[j][i] = min(a[i][j], temp);
        }

    Prim();

    for(int i = 2; i <= n; i++) ans += d[i];
    // 输出2位小数
    printf("%.2f", ans);

    return 0;
}
