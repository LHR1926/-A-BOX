
void dfs()//����������ʾ״̬
{
    if(�����յ�״̬)
    {
        ...//�����������
        return;
    }
    if(Խ������ǲ��Ϸ�״̬)
        return;
    if(����״̬)//��֦
        return ;
    for(��չ��ʽ)
    {
        if(��չ��ʽ���ﵽ״̬�Ϸ�)
        {
            �޸Ĳ���;//�������������
            ��ǣ�
            dfs������
            (��ԭ���)��
            //�Ƿ�ԭ��Ǹ�������
            //������ϣ���ԭ��ǣ����� ���ݷ�
        }

    }
}

//ȫ��
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
		if (vis[i]==false  && i>p[x])  //���������룬Ҳ���Ǽ�֦�����Ա�������ĵݹ�
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

//�Թ�

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
int check(����)
{
    if(��������)
        return 1;
    return 0;
}

void dfs(int step)
{
        �жϱ߽�
        {
            ��Ӧ����
        }
        ����ÿһ�ֿ���
        {
               ����check����
               ���
               ������һ��dfs(step+1)
               �ָ���ʼ״̬�����ݵ�ʱ��Ҫ�õ���
        }
}
����ʵ��ģ�壺
const int maxn=100;
bool vst[maxn][maxn]; // ���ʱ��
int map[maxn][maxn]; // ���귶Χ
int dir[4][2]={0,1,0,-1,1,0,-1,0}; // ����������(x,y)��Χ���ĸ�����


bool CheckEdge(int x,int y) // �߽�������Լ���������ж�
{
if(!vst[x][y] && ...) // ��������
return 1;
else // ��Լ��������ͻ
return 0;
}
void dfs(int x,int y)
{
vst[x][y]=1; // ��Ǹýڵ㱻���ʹ�
if(map[x][y]==G) // ����Ŀ��̬G
{
...... // ����Ӧ����
return;
}
for(int i=0;i<4;i++)
{
if(CheckEdge(x+dir[i][0],y+dir[i][1])) // ���չ���������һ���ڵ�
dfs(x+dir[i][0],y+dir[i][1]);
}
return; // û���²������ڵ㣬����
}
