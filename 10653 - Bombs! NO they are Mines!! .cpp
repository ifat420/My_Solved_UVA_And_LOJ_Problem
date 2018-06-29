// Allah is Almighty //
#include <bits/stdc++.h>

#define lli long long int
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define uu first
#define vv second

using namespace std;

#define r(f) freopen(f,"r",stdin)
#define w(f) freopen(f,"w",stdout)

#define M  1010

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
int mat[M][M];
int d[M][M],vis[M][M];
int row, col;

void bfs(int sx, int sy)
{
    memset(vis,0,sizeof(vis));
    d[sx][sy] = 0;
    vis[sx][sy] = 1;
    queue <pii> q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii top = q.front();
        q.pop();
        rep(k,4){
            int tx = top.uu + fx[k];
            int ty = top.vv + fy[k];
            if(tx >= 0 && tx < row && ty >= 0 && ty < col && mat[tx][ty] != -1 && vis[tx][ty]==0){
                vis[tx][ty] = 1;
                d[tx][ty] = d[top.uu][top.vv]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}

int main()
{
    int bom_num,bm_r,r_num,ps, sx, sy, dx, dy;
    //r("input.txt");
    while(scanf("%d %d",&row,&col)){
        memset(mat,0,sizeof(mat));
        memset(d,0,sizeof(d));
        if(row == 0 && col == 0)break;
        scanf("%d",&bm_r);
        rep(i,bm_r){
            scanf("%d",&r_num);
            scanf("%d",&bom_num);
            rep(j,bom_num){
                scanf("%d",&ps);
                d[r_num][ps] = -1;
            }
        }

        scanf("%d %d",&sx, &sy);

        bfs(sx,sy);
        scanf("%d %d",&dx,&dy);
         printf("%d\n",d[dx][dy]);
    }

    return 0;
}


