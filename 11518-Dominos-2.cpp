#include <bits/stdc++.h>

#define pii pair<int,int>
#define uu first
#define vv second
#define mem(x,y) memset(x,y,sizeof(x));
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define VI vector<int>
#define VS vectot<string>

using namespace std;

#define r(f) freopen(f,"r", stdin)
#define r(f) freopen(f,"w", stdout)

VI adj[10010];
bool visited[10010];

void clear(){
   mem(visited,false);
    rep(j,10010)
        adj[j].clear();
}

void bfs(int src){
    if(visited[src])return;
    visited[src] = true;
    rep(i,adj[src].size()){
            bfs(adj[src][i]);
        }
}

int main()
{
    int t, n, m, l, z;

    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        clear();
        while(m--){
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
        }
        while(l--){
            cin >> z;
            bfs(z);
            }
            int ans = 0;
            for(int i = 1; i <= n; i++){
                if(visited[i] == true)ans++;
            }
            cout << ans << endl;

        }
    return 0;
}
