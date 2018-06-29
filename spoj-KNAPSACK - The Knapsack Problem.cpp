#include <bits/stdc++.h>

using namespace std;

int w[2010], val[2010];
int dp[2010][2010];

int call(int wig, int itm){
    if(itm < 0)return 0;
    if(wig == 0)return 0;
    if(dp[wig][itm] != -1)return dp[wig][itm];
    int pro1 = 0, pro2 = 0;
    if(wig - w[itm] >= 0)pro1 = val[itm] + call((wig - w[itm]), itm - 1);
    else pro1 = 0;
    pro2 = call(wig, itm - 1);
    return dp[wig][itm] = max(pro1, pro2);
}

int main(){
    int n, c;
    memset(dp, -1, sizeof(dp));
    scanf("%d %d", &c, &n);
    for(int i = 0; i < n; i++)scanf("%d %d", &w[i],&val[i]);
    printf("%d\n", call(c, n-1));
    return 0;
}
