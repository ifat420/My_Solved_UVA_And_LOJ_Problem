#include <bits/stdc++.h>
using namespace std;


int power( int n,int p ){
    int ret = n;
    if( p==0 )return 1;
    else if( p==1 )return n;
    else {
        for( int i=2;i<=p;i++ )
            ret = ret * n;
    } return ret;
}

int main()
{
    string in, out;
    int fr, to;

    while( cin >> in >> fr >> to ){
        int n = 0, sz, sum=0, k = 0;
        sz = in.size();
        for( int i=sz-1; i>=0;i-- ){
            if( in[i]=='A' )n = 10;
            else if( in[i]=='B' )n = 11;
            else if( in[i]=='C' )n = 12;
            else if( in[i]=='D' )n = 13;
            else if( in[i]=='E' )n = 14;
            else if ( in[i]=='F' )n = 15;
            else n = (in[i]-'0');
            sum = sum + n*( power( fr,k++ ) );
        }
       n = 0;
       out = "";
       int quo=0, rem=0;
       while( sum ){
            quo = sum/to;
            rem = sum%to;
            if( rem==10 )out+='A';
            else if( rem==11 )out+='B';
            else if( rem==12 )out+='C';
            else if( rem==13 )out+='D';
            else if( rem==14 )out+='E';
            else if( rem==15 )out+='F';
            else out +=( rem+'0' );
            sum = quo;
       }
      reverse( out.begin(),out.end() );
       if(out.size()>7)printf("  ERROR\n");
        else
        {
            if(out.size()!=0){
            cout.width(7);
            cout.setf(ios :: right);
            cout << out << endl;
            }
            else printf("      0\n");

        }
    } return 0;
}
