#include <bits/stdc++.h>

using namespace std;

int n, k;
int coin[20];
//long long dp[20][10000000];


int call(int i, int amt){
    if(i >= n){
        if(amt == 0)return 1;
        else return 0;
    }
    if(amt == 0)return 1;
    //if(dp[i][amt] != -1)return dp[i][amt];
    int ret = 0;
    for(int u = 1; u <= 2; u++){
        if(amt - u*coin[i] >= 0)ret = ret + call(i + 1, amt - u * coin[i]);
        else
            break;
    }
    ret = ret + call(i + 1, amt);
    return ret;
}

int main(){
    int t, ts = 0;
    scanf("%d", &t);
    //memset(dp, -1, sizeof(dp));
    while(t--){
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++)scanf("%d", &coin[i]);
        if(call(0, k))printf("Case %d: Yes\n", ++ts);
        else printf("Case %d: No\n", ++ts);
    }return 0;
}
