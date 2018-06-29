#include <bits/stdc++.h>
using namespace std;

int main()
{
    char in[10000];
    while( gets(in) ){
       int l = strlen(in);
       for( int i=0;i<l;i++ )
            printf("%c",in[i]-7);
        printf("\n");
    } return 0;
}
