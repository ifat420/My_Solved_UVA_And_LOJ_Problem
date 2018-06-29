// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100];
int level[100];

int main()
{
    int edge, Case = 0;
    map <int,int> mymap;
    //freopen("input.txt","r",stdin);
    while(cin >> edge && edge){
        for(int i = 0; i < 100;i++)  adj[i].clear();
        int nodeNum = 1;
        for(int i = 0; i < edge; i++){
            int u, v;
            cin >> u >> v;
            if(mymap.find(u) == mymap.end())mymap[u] = nodeNum++;
            if(mymap.find(v) == mymap.end())mymap[v] = nodeNum++;
            adj[mymap[u]].push_back(mymap[v]);
            adj[mymap[v]].push_back(mymap[u]);
        }
        for(int i = 1; i < nodeNum; i++){
            level[i] = -1;
        }
        int start, path;
        while(cin >> start >> path){
            for(int i = 0; i <= nodeNum; i++)level[i] = -1;
            if(start == 0 && path == 0)break;
            int current = mymap[start];
            queue <int> q;
            q.push(current);
            level[current] = 0;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(int i = 0; i < adj[u].size();i++){
                    if(level[adj[u][i]] == -1){
                        int v = adj[u][i];
                        level[v] = level[u] + 1;
                        q.push(v);
                    }
                }
            }
            int ans= 0;
            for(int i = 1; i < nodeNum; i++){
                   if(level[i]== -1 || level[i] > path)ans++;
                }

                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,ans,start,path);

        }
        mymap.clear();

    }
    return 0;
}
