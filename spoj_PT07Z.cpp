#include <bits/stdc++.h>

using namespace std;

vector<int> g[10010];
int dis[10010];
bool vis[10010];

void bfs(int s, int n){
    for(int i = 0; i <= n; i++){
        dis[i] = -1;
        vis[i] = false;
    }
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    vis[s] = true;
    int u;
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(int i = 0; i < g[u].size(); i++){
            int v = g[u][i];
            if(vis[v] == false){
                q.push(v);
                dis[v] = dis[u] + 1;
                vis[v] = true;
            }
        }
    }
}


int main(){
    int n, u, v;
    scanf("%d", &n);
    for(int i = 0; i < n-1; i++){
        scanf("%d %d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1, n);
    int lstN, d = 0;
    for(int i = 1; i <= n; i++){
        if(dis[i] > d){
            d = dis[i];
            lstN = i;
        }
    }

    bfs(lstN, n);
    d = 0;
    int ansN;
     for(int i = 1; i <= n; i++){
        if(dis[i] > d){
            d = dis[i];
            ansN = i;
        }
    }
    printf("%d\n",dis[ansN]);

    for(int i = 0; i <= n ;i++)g[i].clear();
}
