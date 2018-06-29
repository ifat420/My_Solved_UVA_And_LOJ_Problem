#include<bits/stdc++.h>

using namespace std;

vector<int> points;

//int points[100010];

//int binSrcLowBd(int hi, int lo, int src){
//    int mid;
//    while(lo <= hi){
//        mid = (hi + lo) >> 1;
//        if(points[mid] >= src)
//            hi = mid - 1;
//        else lo = mid + 1;
//
//    }return lo;
//}
//
//int binSrcUprBd(int hi, int lo, int src){
//    int mid;
//    while(lo <= hi){
//        mid = (hi + lo) >> 1;
//        if(points[mid] <= src)
//            lo = mid + 1;
//        else hi = mid - 1;
//    }return lo;
//}

int main()
{
    int t, tcs = 0;
    scanf("%d", &t);
    while(t--){
        int n, q, a, b;
        scanf("%d %d", &n, &q);
        points.assign(n,0);
        for(int i = 0;i < n; i++){
            scanf("%d", &points[i]);
        }
        printf("Case %d:\n", ++tcs);
        while(q--){
            scanf("%d %d", &a, &b);
            //printf("%d\n",binSrcUprBd(n-1, 0, b) - binSrcLowBd(n-1, 0, a));
            printf("%d\n",upper_bound(points.begin(), points.end(), b) - lower_bound(points.begin(), points.end(), a));
        }

    }return 0;
}
