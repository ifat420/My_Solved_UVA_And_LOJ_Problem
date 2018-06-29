#include<bits/stdc++.h>

using namespace std;

int dp[201][201];
vector<int> a[201];
int n, v;

int call(int i, int j){
    if(i >= 0 and i < 2*n - 1 and j >= 0 and j < a[i].size()){
        if(dp[i][j] != -1)return dp[i][j];
        int ret = -1;
        ret = max(ret, call(i+1, j) + a[i][j]);
        if(i < n-1) ret = max(ret, call(i+1, j+1) + a[i][j]);
        else if( i >= n-1)ret = max(ret, call(i+1, j-1) + a[i][j]);

        return dp[i][j] = ret;
    }else
        return 0;
}

int main(){
    int t, p, ts = 0;
    scanf("%d", &t);
    while(t--){
        memset(dp, -1, sizeof(dp));
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            a[i].clear();
            for(int j = 0; j <= i; j++){

                scanf("%d", &p);
                a[i].push_back(p);
            }
        }
        int l = n - 1;
        for(int i = n; i < 2*n - 1; i++){
            a[i].clear();
            for(int j = 0; j < l; j++){
                scanf("%d", &p);
                a[i].push_back(p);
            }
            l--;
        }
        printf("Case %d: %d\n", ++ts, call(0,0));
    }return 0;
}
