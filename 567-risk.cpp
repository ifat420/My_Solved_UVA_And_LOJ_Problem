// Allah is Almighty //
#include <bits/stdc++.h>
using namespace std;

#define lli long long int

vector <lli> adj[21];
lli level[21];

void bfs(lli source){
    for(int i = 1; i <= 20; i++)level[i] = -1;
    queue <lli> q;
    q.push(source);
    level[source] = 0;
    while(!q.empty()){
        lli current = q.front();
        q.pop();
        for(lli i = 0; i < adj[current].size(); i++){
            if(level[adj[current][i]] == -1){
                lli v = adj[current][i];
                level[v] = level[current] + 1;
                q.push(v);
            }
        }
    }
}

void take_input(lli from, lli n){
    lli vertex;
    for(lli i = 1; i <= n; i++){
        scanf("%lld",&vertex);
        adj[from].push_back(vertex);
        adj[vertex].push_back(from);
    }
}

int main()
{
    lli n, Case, source, distence,c=0;
    //freopen("input.txt","r",stdin);
    while(scanf("%lld",&n) != EOF){
        for(int i = 1; i <= 20; i++)adj[i].clear();
        take_input(1,n);
        for(int i = 2; i <= 19; i++){
            scanf("%lld",&n);
            take_input(i, n);
        }
        scanf("%lld",&Case);
        for(int i = 1; i <= Case; i++){
            scanf("%lld %lld",&source, &distence);

            bfs(source);
            if(i == 1)printf("Test Set #%lld\n",++c);

            if(source < 10)printf(" %lld",source);
            else printf("%lld",source);

            if(distence < 10)printf(" to  %lld: %lld\n",distence,level[distence]);
            else printf(" to %lld: %lld\n",distence, level[distence]);

        }
        printf("\n");

    }
    return 0;

}
