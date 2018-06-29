// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;

vector <int> mat[500];
int color[500];

int bfs(int n,int s)
{
    queue <int> q;
    q.push(s);
    color[s] = 1;
    while(!q.empty()){
        int u = q.front();
        for(int i = 0; i < mat[u].size();i++){
            if(color[mat[u][i]] == 0){
                if(color[u] == 1)color[mat[u][i]] = 2;
                else color[mat[u][i]] = 1;
                q.push(mat[u][i]);
            }
            else if(color[mat[u][i]] == color[u])return 1;
        }
        q.pop();

    }
    return 0;
}


int main()
{
    int node, edge;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&node)){
        if(node == 0)break;
        for(int i = 0; i < node; i++){
            color[i] = 0;
            mat[i].clear();
        }
        scanf("%d",&edge);

        for(int i = 0; i < edge; i++){
           int u, v;
           scanf("%d %d",&u, &v);
           mat[u].push_back(v);
           mat[v].push_back(u);
        }
    int start = 0;
    if(bfs(node,start)){
        printf("NOT BICOLORABLE.\n");
    }else
        printf("BICOLORABLE.\n");

  }
  return 0;

}
