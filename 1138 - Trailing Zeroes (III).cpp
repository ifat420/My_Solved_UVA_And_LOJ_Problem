#include<bits/stdc++.h>

using namespace std;

int coutTrzro(long long n){
    int tzro = 0;
    while(n){
        tzro += n / 5;
        n /= 5;
    }return tzro;
}

int main()
{
    int t, tcs = 0;
    scanf("%d", &t);
    while(t--){
        long long q, hi, lo, mid;
        scanf("%lld", &q);
        lo = 0;
        hi = 1e9;
        while(lo <= hi){
            mid = (hi + lo) >> 1;
            if(coutTrzro(mid) >= q){
                hi = mid - 1;
            }else lo = mid + 1;
        }
        if(coutTrzro(lo) != q)printf("Case %d: impossible\n",++tcs);
        else printf("Case %d: %lld\n",++tcs, lo);
    }return 0;
}
