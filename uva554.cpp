#include<bits/stdc++.h>

using namespace std;

#define tst cout << 1 << endl;
#define INF 0x3f3f3f3f
#define pb(x) push_back(x)
#define mk(x, y) make_pair(x, y)

typedef pair<int, int> ipair;

int edge, node;
list<pair<int, int> > *adj;
vector<int> key;
vector<int> parent;
vector<bool> inMST;

void primMST(int src){
    priority_queue<ipair> pq;
    pq.push(mk(0, src));
    key.assign(node,-1);
    parent.assign(node, -1);
    inMST.assign(node, false);
    key[src] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        list<pair<int, int> > :: iterator i;
        for(i = adj[u].begin(); i != adj[u].end(); ++i){
            int v = (*i).first;
            int weight = (*i).second;
            if(inMST[v] == false and key[v] < weight){
                key[v] = weight;
                pq.push(mk(key[v], v));
                parent[v] = u;
            }
        }
    }
}

int main(){
    char s1[110], s2[110];
    int t = 0;
    while(scanf("%d %d", &node, &edge) and edge and edge){
        map<string, int> mymap;
        int assign = 0, weight;
        adj = new list<ipair> [node];
        for(int i = 0; i < edge; i++){
             cin >> s1 >> s2 >> weight;
             if(mymap.find(s1) == mymap.end()){
             //printf("Mapping %s with %d\n", s1,assign);
             mymap[s1] = assign++;
           }
           if(mymap.find(s2) == mymap.end()){
             //printf("Mapping %s with %d\n", s2,assign);
             mymap[s2] = assign++;
           }
           int u = mymap[s1];
           int v = mymap[s2];
           //cout << mymap[s1] << " " << mymap[s2] << endl;
           adj[u].pb(mk(v, weight));
           //cout << u << " " << v << " " << weight << endl;
           adj[v].pb(mk(u, weight));
            //cout << v << " " << u << " " << weight << endl;
        }
        cin >> s1 >> s2;
        int src = mymap[s1];
        int des = mymap[s2];
        //cout << src << des << endl;
        primMST(src);
        int p = des;
        int ans = INF;
        while(1){
            if(p == src)break;
            //cout << parent[p] << "--" << p << " = " << key[p] << endl;
            ans = min(ans, key[p]);
            p = parent[p];
        }
        mymap.clear();
        printf("Scenario #%d\n", ++t);
        printf("%d tons\n\n", ans);
    }return 0;

}

