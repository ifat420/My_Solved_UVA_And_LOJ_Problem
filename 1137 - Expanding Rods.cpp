#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, tcs = 0;
    scanf("%d", &t);
    while(t--){
        double l, n, c, expL, hi, lo, mid, rad, temL, theta;
        //cin >> l >> n >> c;
        scanf("%lf %lf %lf", &l, &n, &c);
        expL = (1 + n * c) * l;
        hi = l;
        lo = 0;
        printf("Case %d: ", ++tcs);
        while((hi - lo) > 1e-9){
            mid = (hi + lo) / 2.0;
            rad = (mid / 2.0) + ((l * l) / (8.0 * mid));
            theta = 2 * asin((l / 2) / rad);
            temL = rad * theta;
            if(temL >= expL){
                hi = mid;
            }else{
                lo = mid;
            }
        }printf("%.8lf\n",lo);
        //cout << lo << endl;
    }return 0;
}
