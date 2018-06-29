#include <bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define mem(x,y) memset(x,y,sizeof(x));

vector <int> gf[10000];
string allc[10000];
int parent[10000];
int visited[10000];
int level[10000];
vector <int> p;

void bfs(int src){
    mem(visited,0);
    visited[src] = 1;
    level[src] = 0;
    queue <int> q;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        rep(i,gf[u].size()){
            int v = gf[u][i];
            if(visited[v] == 0){
                visited[v] = 1;
                level[v] = level[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

int main()
{
    int nc;
    string s1, s2, src, dis;
    map<string, int> mymap;
    int first = 1;
    while(cin >> nc){
        mymap.clear();
        p.clear();
        if(!first)cout << endl;
        first = 0;
        rep(i,10000)gf[i].clear();
        int assign = 1;
        rep(i,nc){
            cin >> s1 >> s2;
            if(mymap.find(s1) == mymap.end())mymap[s1] = assign ++;
            if(mymap.find(s2) == mymap.end())mymap[s2] = assign ++;

            int u, v;
            u = mymap[s1];
            v = mymap[s2];
            gf[u].push_back(v);
            gf[v].push_back(u);
            allc[mymap[s1]] = s1;
            allc[mymap[s2]] = s2;
        }
        cin >> src >> dis;

        mem(parent,0);
        mem(level,0);

        bfs(mymap[src]);
        int pth = mymap[dis];
        if(level[mymap[dis]] == 0){
            cout << "No route" << endl;
        } else {
            for(int i = 0; i <= level[mymap[dis]];i++){
                p.push_back(pth);
                pth = parent[pth];
            }
            reverse(p.begin(),p.end());
            for(int i = 0; i < p.size()-1; i++)cout << allc[p[i]] << " " << allc[p[i+1]]<< endl;
        }



    }
    return 0;
}
