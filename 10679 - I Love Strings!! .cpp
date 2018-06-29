// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

vector<int> lsf;
string ss, qq;

void kmp(){
    int i=0, j=0;
    while( i<qq.size() and j < ss.size() ){
        if( qq[i]==ss[j] ){
            i++;
            j++;
        }else{
            if( j!=0 ){
                j = lsf[j-1];
            }else{
                i++;
            }
        }
    }
    if( j==ss.size() )cout<< 'y' << endl;
    else cout << 'n' << endl;
}

int main()
{
    int t;
    cin >> t;
    while( t-- ){
        cin >> qq;
        int q;
        cin >> q;
        while( q-- ){
            cin >> ss;
            int len = ss.size();
            lsf.assign( len,0 );
            int index = 0;
            for( int i=1;i<len; ){
            if( ss[i]==ss[index] ){
                lsf[i] = index+1;
                i++;
                index++;
            }else{
                if( index != 0 ){
                    index = lsf[index-1];
                }else{
                    lsf[i] = 0;
                    i++;
                }
            }
        }
            kmp( );
        }

    }return 0;
}
