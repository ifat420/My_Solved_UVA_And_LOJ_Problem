#include <bits/stdc++.h>

using namespace std;

double x, y, c;

bool check(double mid){
    double h1 = sqrt((x * x) - (mid * mid));
    double h2 = sqrt((y * y) - (mid * mid));
    if((h1 * h2) / (h1 + h2) <= c)return true;
    else return false;
}

int main()
{
    int t, tcs = 0;
    cin >> t;
    while(t--){
        double hi, lo, mid;
        cin >> x >> y >> c;
        hi = min(x, y);
        lo = 0;
        while((hi - lo) > 1e-9){
            mid = (hi + lo) / 2;
            if(check(mid)){
                hi = mid;
            }else
                lo = mid;
        }printf("Case %d: %.8lf\n", ++tcs, mid);
    }return 0;
}
