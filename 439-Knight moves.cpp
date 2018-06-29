// Allah is Almighty //
#include <bits/stdc++.h>

#define lli long long int
#define pii pair <int,int>
#define pb(x) push_back(x)
#define req(i,n) for(int i = 0; i < (int)n; i++)
#define mem(x,y) memset(x, y, sizeof(x));
#define pmp make_pair
#define uu first
#define vv second

using namespace std;

#define R(f) freopen(f,"r",stdin)
#define W(f) freopen(f,"w",stdout)

int mat[10][10];
int d[10][10];
int vis[10][10];

string in1, in2;

int fx[] = {1, -1, 1, -1, 2, 2, -2, -2};
int fy[] = {2, 2, -2, -2, 1, -1, 1, -1};
int row = 8, col = 8;

void bfs(int sx, int sy){
    mem(vis,0);
    d[sx][sy] = 0;
    vis[sx][sy] = 1;
    queue <pii> q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii top = q.front();
        q.pop();
        for(int k = 0; k < 8; k++){
            int tx = top.uu + fx[k];
            int ty = top.vv + fy[k];
            if(tx >= 1 && tx <= row && ty >= 1 && ty <= col && vis[tx][ty] == 0){
                vis[tx][ty] = 1;
                d[tx][ty] = d[top.uu][top.vv] + 1;
                q.push(pii(tx,ty));

            }
        }
    }
}


int main()
{
   int sx, sy, dx, dy;
    while(cin >> in1 >> in2){

        sx = (in1[0] - 97)+1;
        dx = (in2[0] - 97) +1;
        sy = in1[1] - '0';
        dy = in2[1] - '0';
        //cout << sx << sy << " " << dx << dy;
        mem(d,0);
        mem(mat,0);

        bfs(sx,sy);
        cout<<"To get from "<<in1<<" to "<<in2<<" takes "<<d[dx][dy]<<" knight moves.\n";
    }
    return 0;





}

