// ALLAH IS ALMIGHTY //
//Problem type: Minimum vertex Cover
#include <bits/stdc++.h>

using namespace std;

#define mxn 1050

int dp[mxn][mxn];
int par[mxn];
vector<int> edge[mxn];

int f(int u, int isGuard){
    if(edge[u].size() == 0){
        return 0;
    }
    if(dp[u][isGuard] != -1){
        return dp[u][isGuard];
    }

    int sum = 0;
    for(int i = 0; i < (int)edge[u].size(); i++){
        int v = edge[u][i];
        if(v != par[u]){
            par[v] = u;
            if(isGuard == 0)
                sum += f(v, 1);
            else
                sum += min(f(v, 1), f(v, 0));
        }
    }
    return dp[u][isGuard] = sum + isGuard;
}

int main(){
    int n;
    while(scanf("%d", &n) && n){
        int l;
        memset(dp, -1, sizeof(dp));
        memset(par, -1, sizeof(par));
        for(int i = 1; i <= n; i++){
            scanf("%d", &l);
            for(int j = 0; j < l; j++){
                int u = i;
                int v;
                scanf("%d", &v);
                edge[i].push_back(v);
            }
        }
        int ans = 0;
        if(n == 1)ans = 1;
        else ans = min(f(1, 1), f(1, 0));
        printf("%d\n", ans);
        for(int i = 0; i <= n ;i++){
            edge[i].clear();
        }

    }
    return 0;
}
