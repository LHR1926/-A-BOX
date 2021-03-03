
void dfs()//参数用来表示状态
{
    if(到达终点状态)
    {
        ...//根据题意添加
        return;
    }
    if(越界或者是不合法状态)
        return;
    if(特殊状态)//剪枝
        return ;
    for(扩展方式)
    {
        if(扩展方式所达到状态合法)
        {
            修改操作;//根据题意来添加
            标记；
            dfs（）；
            (还原标记)；
            //是否还原标记根据题意
            //如果加上（还原标记）就是 回溯法
        }

    }
}

//全排
#include<iostream>
#include<cmath>
using namespace std;

int p[10]={0};
bool vis[10]={0};
int n;
void dfs(int x)
{
	if (x==n+1)
	{
		for(int i=1;i<=n;i++)
		cout<<p[i]<<" ";
		cout<<endl;
		return ;
	}

	for (int i=1;i<=n;i++)
	{
		if (vis[i]==false  && i>p[x])  //加上这句代码，也就是剪枝，可以避免下面的递归
		{
			p[x] = i;
			vis[i] = true;

			dfs(x+1);
			vis[i] = false;
		}
	}
}

int main()
{
	n=4;
	dfs(1);
	return 0;
}

//迷宫

#include<bits/stdc++.h>
using namespace std;
int n;
char map1[35][35];
int vis[35][35];
int dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
void dfs(int a,int b){
    if(a>n||b>n||a<=0||b<=0||map1[a][b]=='#'||vis[a][b]==1) return ;
    vis[a][b]=1;
    for(int i=0;i<4;i++){
        int tx=a+dir[i][0];
        int ty=b+dir[i][1];
        dfs(tx,ty);
    }
}
int main(){
    int i,j,cnt,ans,zx,zy;
    while(scanf("%d",&n)!=EOF){
    cnt=0,ans=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>map1[i][j];
    memset(vis,0,sizeof(vis));
    dfs(1,1);
    dfs(n,n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++){
            if(vis[i][j]==1){
                for(int k=0;k<4;k++){
                zx=i+dir[k][0];
                zy=j+dir[k][1];
                if(vis[zx][zy]==0) cnt++;
                }
            }
        }
    }
    ans=9*(cnt-4);
    cout<<ans<<endl;
}
    return 0;
}
//
int check(参数)
{
    if(满足条件)
        return 1;
    return 0;
}

void dfs(int step)
{
        判断边界
        {
            相应操作
        }
        尝试每一种可能
        {
               满足check条件
               标记
               继续下一步dfs(step+1)
               恢复初始状态（回溯的时候要用到）
        }
}
程序实现模板：
const int maxn=100;
bool vst[maxn][maxn]; // 访问标记
int map[maxn][maxn]; // 坐标范围
int dir[4][2]={0,1,0,-1,1,0,-1,0}; // 方向向量，(x,y)周围的四个方向


bool CheckEdge(int x,int y) // 边界条件和约束条件的判断
{
if(!vst[x][y] && ...) // 满足条件
return 1;
else // 与约束条件冲突
return 0;
}
void dfs(int x,int y)
{
vst[x][y]=1; // 标记该节点被访问过
if(map[x][y]==G) // 出现目标态G
{
...... // 做相应处理
return;
}
for(int i=0;i<4;i++)
{
if(CheckEdge(x+dir[i][0],y+dir[i][1])) // 按照规则生成下一个节点
dfs(x+dir[i][0],y+dir[i][1]);
}
return; // 没有下层搜索节点，回溯
}
