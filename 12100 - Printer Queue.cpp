#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n, pos, k;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        cin >> n >> pos;
        for(int i = 0; i < n; i++){
            cin >> k;
            q.push(make_pair(k, i));
            pq.push(k);
        }
        int ans = 0;
        while(!q.empty()){
            if(q.front().first == pq.top()){
                ans++;
                if(q.front().second == pos){
                    break;
                }else{
                    pq.pop();
                    q.pop();
                }
            }else{
                q.push(q.front());
                q.pop();
            }
        }cout << ans << endl;
    }return 0;
}
