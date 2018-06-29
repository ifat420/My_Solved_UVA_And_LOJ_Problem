#include <bits/stdc++.h>

using namespace std;

vector<long long> toLnum;

void dfs(int d, long long dig){
    if(d > 12)return;
    toLnum.push_back(dig);
    dfs(d + 1, dig * 10 + 4);
    dfs(d + 1, dig * 10 + 7);
}

int tmp;

void dfs2(long long dig, int t){
    if(dig != 1)toLnum.push_back(dig);
    for(int i = t; i < tmp; i++){
        if(toLnum[i] <= 1000000000000 / dig)dfs2(toLnum[i] * dig, i);
        else break;
    }
}

int main()
{
    int t, tcs = 0;
    long long a, b;
    scanf("%d", &t);

    dfs(1, 4);
    dfs(1, 7);
    sort(toLnum.begin(), toLnum.end());
    tmp = toLnum.size();
    dfs2(1, 0);
    sort(toLnum.begin(), toLnum.end());
    toLnum.erase(unique(toLnum.begin(), toLnum.end()), toLnum.end());
    while(t--){
        scanf("%lld %lld", &a, &b);
        int ans = upper_bound(toLnum.begin(), toLnum.end(), b) - lower_bound(toLnum.begin(), toLnum.end(), a);
        printf("Case %d: %d\n", ++tcs, ans);
    }return 0;
}

