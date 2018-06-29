#include <bits/stdc++.h>

using namespace std;

int dp[1020][30];
int trk[30];
bool rem[1020][30];
bool sp[30];

int call(int lftm, int i){
    if(i < 0)return 0;
    if(lftm == 0)return 0;
    if(dp[lftm][i] != -1)return dp[lftm][i];
    int pro1 = 0, prod1 = 0, pro2 = 0, prod2;
    if(lftm - trk[i] >= 0){
        pro1 = trk[i] + call(lftm - trk[i], i-1);
    }
    else pro1 = 0;
    pro2 = call(lftm, i-1);
    rem[lftm][i] = (pro1 > pro2) ? true : false;
    return dp[lftm][i] = max(pro1, pro2);
}

int main(){
    int tps, trknm;
    //freopen("inp.txt","r", stdin);
    while(scanf("%d %d", &tps, &trknm) != EOF){
        memset(dp, -1, sizeof(dp));
        memset(sp, false, sizeof(sp));
        for(int i = 0; i < trknm; i++){
            scanf("%d", &trk[i]);
        }
        int n = call(tps, trknm - 1);
        int tn = trknm - 1;
        for(int i = tn; i >= 0; i--){
            if(rem[tps][i]){
                //cout << i << endl;
                sp[i] = 1;
                tps = tps - trk[i];
            }
        }

        int sum = 0;
        for(int i = 0; i < trknm; i++){
            if(sp[i]){
                printf("%d ",trk[i]);
                sum += trk[i];
            }
        }
        printf("sum:%d\n", sum);
    } return 0;

}
