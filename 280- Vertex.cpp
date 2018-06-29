#include <bits/stdc++.h>

#define pii pair<int,int>
#define uu first
#define vv second
#define mem(x,y) memset(x,y,sizeof(x));
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define VI vector<int>
#define VS vectot<string>

using namespace std;

#define r(f) freopen(f,"r", stdin)
#define r(f) freopen(f,"w", stdout)



vector <int> gf[1000];
VI ans;
bool check[1000];

int in ,q;
int ckl;

void dfs(int n){

    if(n != in || ckl != -1)
        check[n] = true;
    ckl = 1;

    for(int i = 0; i < gf[n].size(); i++){
    int v = gf[n][i];
    if(check[v] == false){
            dfs(v);
        }
    }
}

int main()
{
    int node, u, v;

    while(cin >> node && node){

        while(1){
            cin >> u;
            if(!u)break;
            while(cin >> v && v){
                gf[u].pb(v);
            }
        }
        cin >> q;
        while(q--){
             cin >> in;
             for(int i = 0; i <= node; i++){
                    check[i] = false;
                    //gf[i].clear();
             }
             ans.clear();
            ckl = -1;
            dfs(in);
           for(int i = 1; i <= node;i++){
                if(check[i] == false)ans.pb(i);
             }
             cout << ans.size();
             for(int i = 0; i < ans.size(); i++)cout << " " << ans[i];
             cout << endl;

        }
        for(int i = 0; i < 1000; i++)gf[i].clear();
    }
    return 0;
}
