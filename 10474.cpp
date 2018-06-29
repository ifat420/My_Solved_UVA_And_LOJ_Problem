#include <bits/stdc++.h>

using namespace std;

vector<int> num;

int main()
{
    int n, q, t = 0;
    while(scanf("%d %d", &n, &q) and n and q){
        int qus;
        num.assign(n, 0);
        for(int i = 0; i < n; i++){
            scanf("%d", &num[i]);
        }
        sort(num.begin(), num.end());
        printf("CASE# %d:\n", ++t);
        while(q--){
            scanf("%d", &qus);
            int hi = n-1, lo = 0, mid = 0, ans = -1;
            while(hi >= lo){
                mid = hi + lo >> 1;
                if(num[mid] == qus){
                    ans = mid;
                    hi = mid - 1;
                }else if(num[mid] > qus)hi = mid - 1;
                else lo = mid + 1;
            }
            if(ans == - 1)printf("%d not found\n",qus);
            else printf("%d found at %d\n",qus, ans+1);
        }
    }return 0;
}
