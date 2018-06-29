#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen( "input.txt","r",stdin );
    int t,no=0;
    cin >> t;
    while( t-- ){
        string cpg, cmd;
        printf( "Case %d:\n",++no );
        cmd = "";
        stack<string> fw, bw;
        cpg = "http://www.lightoj.com/";
        bw.push( cpg );
        while( cin >> cmd ){
            if( cmd[0]=='Q' )break;
            if( cmd[0]=='V' ){
                cin >> cpg;
                cout << cpg << endl;
                bw.push( cpg );
                if( !fw.empty() )while( !fw.empty() )fw.pop();
            }else{
                if( cmd[0]=='B' ){
                   fw.push( bw.top() );
                   bw.pop();
                   if( !bw.empty() )cout << bw.top() <<endl;
                   else{
                     printf( "Ignored\n" );
                     bw.push( fw.top() );
                     fw.pop();
                   }
                } else if( cmd[0]=='F' ){
                        if( !fw.empty() ){
                            cout << fw.top() << endl;
                            bw.push( fw.top() );
                            fw.pop();
                        }else{
                            printf( "Ignored\n" );
                        }
                }
            }
        }

    }
}
