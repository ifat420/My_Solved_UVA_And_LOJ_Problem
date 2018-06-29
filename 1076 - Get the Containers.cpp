#include <bits/stdc++.h>

using namespace std;

int nums[1100], n, c, t, maxx, total, finAns, T;

bool checker(int mid){
    int bott = 1, tot = 0;
    for(int i = 0; i < n; i++){
        tot += nums[i];
        if(tot > mid){
            bott++;
            tot = nums[i];
        }
    }
    if(bott <= c)return true;
    else return false;
}

int binSrc(int lo, int hi){
    int mid, ans = 0;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(checker(mid)){
            ans = mid;
            hi = mid - 1;
        }else lo = mid + 1;
    }return ans;
}

int main()
{
    cin >> t;
    T = 0;
    while(t--){
        maxx = total = 0;
        cin >> n >> c;
        for(int i = 0; i < n; i++){
            cin >> nums[i];
            total += nums[i];
            maxx = max(maxx,nums[i]);
        }
        finAns = binSrc(1,total);
        finAns = max(finAns, maxx);
        printf("Case %d: %d\n",++T,finAns);

    }return 0;
}
