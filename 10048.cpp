#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, s, q, nod[110][110],a, b, dis, t=0;
    bool flag = false;
    while(scanf("%d %d %d", &c, &s, &q) and c){
        for(int i = 1; i <= c; i++){
            for(int j = 1; j <= c; j++){
                nod[i][j] = 1e9;
            }
        }
        while(s--){
            scanf("%d %d %d", &a, &b, &dis);
            nod[a][b] = nod[b][a] = dis;
        }
        for(int k = 1; k <= c; k++){
            for(int i = 1; i <= c; i++){
                for(int j = 1; j <= c; j++){
                    nod[i][j] = min(nod[i][j], max(nod[i][k], nod[k][j]));
                }
            }
        }
        if(flag)cout << endl;flag = true;
        printf("Case #%d\n", ++t);
        while(q--){
            scanf("%d %d", &a, &b);
            if(nod[a][b] != 1e9)printf("%d\n",nod[a][b]);
            else printf("no path\n");
        }
    }return 0;

}
