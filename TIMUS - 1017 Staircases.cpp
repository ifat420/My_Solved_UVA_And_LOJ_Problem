#include <bits/stdc++.h>

using namespace std;

long long dp[550][550];

long long stairCases(int rembriks, int lastSizWall){
    if(rembriks == 0)return 1;
    if(rembriks <= lastSizWall)return 0;
    if(dp[rembriks][lastSizWall] != -1)return dp[rembriks][lastSizWall];
    long long ret = 0;
    for(int i = lastSizWall + 1; i <= rembriks; i++){
        ret += stairCases(rembriks - i, i);
    }
    return dp[rembriks][lastSizWall] = ret;
}

int main(){
    int n;
    scanf("%d", &n);
    memset(dp, -1, sizeof(dp));
    cout << stairCases(n, 0) -1 << endl;
}
