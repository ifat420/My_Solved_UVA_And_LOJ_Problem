#include<bits/stdc++.h>

using namespace std;

int dp[22][3];
int house[22][3];

int main(){
    int t, tcs=0;
    cin >> t;
    while(t--){
        //cout << endl;
        int n;
        cin >> n;
        for(int i= 0; i < n; i++){
            cin >> house[i][0] >> house[i][1] >> house[i][2];
        }

        dp[0][0] = house[0][0];
        dp[0][1] = house[0][1];
        dp[0][2] = house[0][2];
        for(int i = 1; i < n; i++){
            dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + house[i][0];
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + house[i][1];
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + house[i][2];
        }
        printf("Case %d: %d\n",++tcs, min(dp[n-1][2], min(dp[n-1][0], dp[n-1][1])));
    }return 0;
}
