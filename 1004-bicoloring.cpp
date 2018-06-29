// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;



vector <int> mat[500];
int color[500];
int main()
{
    int node, edge;
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&node)){
        if(node == 0)break;
        bool check = false;
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
    for(int i = 0; i < node; i++){
        color[i] = 0;
    }

    for(int i = 0; i < node; i++){
        if(color[i] == 0){
            color[i] = 1;
            for(int j = 0; j < mat[i].size(); j++){
                color[mat[i][j]] = 2;
            }
        }
    }
    for(int i = 0; i < node; i++){
        for(int j = 0; j < mat[i].size(); j++){
            if(color[i] == color[mat[i][j]])
            {
                check = true;
                break;
            }
        }
        if(check){
            break;
        }
    }
   if(check){
    printf("\nNOT BICOLORABLE.");
   } else{
        printf("\nBICOLORABLE.");
   }
  }
  return 0;
}
