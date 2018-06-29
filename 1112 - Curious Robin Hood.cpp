#include <bits/stdc++.h>
using namespace std;

#define mx 100005
int arr[mx];
int tree[mx*3];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    //freopen( "input.txt","r",stdin );
    int t, n, q, c, a, b, cs=0, i, j, value;
    scanf( "%d",&t );
    while( t-- ){
        scanf( "%d%d",&n,&q );
        for( int i=1;i<=n;i++ )scanf( "%d",&arr[i] );
        init( 1,1,n );
        printf( "Case %d:\n",++cs );
        while( q-- ){
            scanf( "%d",&c );
            if( c==1 ){
                scanf( "%d",&i );
                printf( "%d\n",arr[i+1]);
                arr[i+1] = 0;
                update(1,1,n,i+1,0);
            }else if( c==2 ){
                scanf( "%d %d",&i,&value );
                arr[i+1] = arr[i+1] + value;
                update( 1,1,n,i+1,arr[i+1] );
            }else if(c==3){
                scanf( "%d %d",&i,&j );
                printf( "%d\n",query(1,1,n,i+1,j+1));
            }
        }
    }return 0;
}
