// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;

#define M 1000
 int adj[M][M];
const int infinity = 1000000000;

int main()
{
    int edge,Case=0;
    freopen("input.txt","r",stdin);
    while(scanf("%d",&edge)){
        int assign = 0;
        map <int,int> mymap;
        int arr[1000];
            if(edge == 0)break;
        priority_queue <int> big;
        for(int i = 0; i <= 1000; i++){
            for(int j = 0; j <= 1000; j++){
                adj[i][j] = infinity;
            }
        }
        for(int i = 0; i < edge; i++){
            int in1, in2, u, v;
            scanf("%d %d",&in1,&in2);
            if(mymap.find(in1) == mymap.end())mymap[in1] = assign++;
            if(mymap.find(in2) == mymap.end())mymap[in2] = assign++;
            u = mymap[in1];
            v = mymap[in2];
            arr[u] = in1;
            arr[v] = in2;
            adj[u][v] = 1;
            adj[v][u] = 1;
            big.push(u);
            big.push(v);

        }
        int n = big.top();
        cout << n;
        for(int k = 0; k <= n; k++)
            for(int i = 0; i <= n; i++)
                for(int j = 0; j <= n; j++)
                   adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);

        for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++){
            if(adj[i][j] == infinity){
                adj[i][j] = 0;
            }
        }


     int node, path, out_node = 0,nd;
     while(scanf("%d %d",&node,&path)){
            nd = mymap[node];
            if(nd == 0 && path == 0)break;
            out_node = 0;
        for(int i = 0; i <=n; i++){
           if(adj[nd][i] > path){
                    out_node++;
            }
        }
        if(path == 1)printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,out_node-1,arr[nd],path);
        else printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,out_node,arr[nd],path);
     }
     mymap.clear();


    }
    return 0;
}
