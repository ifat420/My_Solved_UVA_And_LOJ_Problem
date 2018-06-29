// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define mpii map <int,int>
#define dqi deque <int>

#define M 1000


int mat[M][M];
int arr[M];
const int infinity = 1000000000;


int main()
{
    int edge,Case = 0;
    mpii mymap;
    //freopen("input.txt","r", stdin);

    while(sf("%d",&edge) && edge){
        int assign = 0;
        memset(arr,0,M);
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M; j++){
                mat[i][j] = infinity;
            }
        }
        for(int i = 0; i < edge; i++){
            int in1, in2, u, v;
            sf("%d %d",&in1,&in2);
            if(mymap.find(in1) == mymap.end())mymap[in1] = assign++;
            if(mymap.find(in2) == mymap.end())mymap[in2] = assign++;
            u = mymap[in1];
            v = mymap[in2];
            mat[u][v] = 1;
            mat[v][u] = 1;
            arr[u] = in1;
            arr[v] = in2;
        }
        int n = mymap.size();

      for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);


      for(int i = 0; i < M; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == infinity){
                mat[i][j] = 0;
            }
        }
      }
      int node, path, nd, ans;
      while(sf("%d %d",&node, &path)){
            if(node == 0 && path == 0)break;
            ans = 0;
            nd = mymap[node];
            for(int i = 0; i < n; i++){
                if(mat[nd][i] > path){
                    ans++;
                }
            }
            if(path == 1 || path == 0)pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,ans-1,node,path);
            else pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,ans,node,path);
      }
      mymap.clear();

    }
    return 0;
}
