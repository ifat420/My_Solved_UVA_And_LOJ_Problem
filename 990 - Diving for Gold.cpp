#include<bits/stdc++.h>

using namespace std;

int dp[1005][35];
int d[35], v[35];
int t, w, n;
int rem[1005][35];
int mark[35];

int call(int t, int nm){
    if(!t or nm < 0)return 0;
    if(dp[t][nm] != -1)return dp[t][nm];
    int pro1 = 0, pro2 = 0;
    if(t - d[nm] >= 0)pro1 = v[nm] + call(t - d[nm], nm - 1);
    else pro1 = 0;
    pro2 = call(t, nm - 1);
    rem[t][nm] = (pro1 > pro2);
    return dp[t][nm] = max(pro1, pro2);

}

int main(){
    bool z = false;
    while(scanf("%d %d", &t, &w) != EOF){
        memset(dp, -1, sizeof(dp));
        memset(d, -1, sizeof(d));
        memset(v, -1, sizeof(v));
        memset(rem, 0, sizeof(rem));
        memset(mark, 0, sizeof(mark));
        if(z)printf("\n");
        z = true;
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d %d", &d[i], &v[i]);
            d[i] = d[i] * 3 * w;
        }
        printf("%d\n", call(t, n-1));
        int m = n-1;
        int p = t;
        int ct = 0;
        while(m >= 0){
            //cout << p << " " << m << endl;
            if(rem[p][m]){
                ct++;
                mark[m] = 1;
                p = p - d[m];
            }
            m--;
        }
        printf("%d\n", ct);
        for(int i = 0; i < n; i++){
            if(mark[i]){
                printf("%d %d\n", d[i]/3/w, v[i]);
            }
        }
    }return 0;
}
