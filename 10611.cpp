#include <bits/stdc++.h>

using namespace std;

int n, num[50010], qnum, q;

int binSrc(int l, int h, int f){
    int m;
    while(l < h){
        m = (l + h) / 2;
        if(num[m] == f)h = h - 1;
        else if(num[m] > f)h = m - 1;
        else l = m + 1;
    }return l;
}

int main()
{
    //freopen("output.txt","w",stdout);
    while(cin >> n){
        for(int i = 0; i < n; i++)cin >> num[i];
        cin >> qnum;
        for(int i = 0; i < qnum; i++){
            cin >> q;
            int idx = binSrc(0, n-1, q);
            //cout << idx << endl;
            int a = -1, b = -1;
            for(int j = idx; j >= 0; j--){
                if(num[j] < q){
                    a = j;
                    break;
                }
            }
            for(int j = idx; j < n; j++){
                 if(num[j] > q){
                    b = j;
                    break;
                }
            }
            if(a == -1)cout << "X ";
            else cout << num[a] << " ";
            if( b == -1)cout << "X" << endl;
            else cout << num[b] << endl;
        }
    }return 0;
}
