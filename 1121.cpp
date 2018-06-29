#include <bits/stdc++.h>
using namespace std;

const int NX = 1e6 + 10 ; // lenght of the input

int inp[NX] ; // input array ;
int len ; // lenght of the array
int M ; //  Given value

void solve()
{
      int ans = len + 2 ;
      int high = 0 , low = 0 ;
      int sum = inp[high] ;
      while( high < len )
      {
          if( sum >= M )
          {
                ans = min( ans , high - low + 1 );
          }
          if( sum >= M && low < high )
          {
                sum -= inp[low];
                low++;
          }
          else
          {
               sum += inp[++high];
          }

      }
      if( ans ==  len + 2 ) ans = 0 ; // it can't be possible to make M
      cout << ans << endl ;
}
int main()
{
    while( scanf( "%d %d",&len,&M ) ){
        for( int i=0;i<len;i++ ){
            cin >> inp[i];
        }
        solve();

    }
}
