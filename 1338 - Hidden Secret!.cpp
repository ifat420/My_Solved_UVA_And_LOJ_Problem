// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs=0;
    cin >> t;
    getchar();
    while( t-- ){
       char a;
       int tag = 0;
       map<char,int> cot;
       while( scanf( "%c",&a ) && a!='\n' ){
            if( a==' ' )continue;
            a = tolower( a );

            if( a>= 'a' && a<='z') cot[a]++;
       }
       while( scanf( "%c",&a ) && a!='\n' ){
            if( a==' ' )continue;
            a = tolower( a );
            if( a>='a' && a<='z' )
            if( cot[a] )cot[a]--;
            else{
                tag = 1;
                break;
            }
       }
       if( tag )printf( "Case %d: No\n",++cs );
       else printf( "Case %d: Yes\n",++cs );
    }
    return 0;

}
