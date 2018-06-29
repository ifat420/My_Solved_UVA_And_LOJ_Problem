#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l;
    int arr[60];
    cin >> t;
    while( t-- ){
        cin >> l;
        for( int i=0; i<l; i++ ){
            cin >> arr[i];
        }
        int ans = 0;
        for( int i=0; i<l-1;i++ ){
            for( int j=i;j<l-1;j++ ){
                if( arr[i] > arr[j+1] ){
                    swap(arr[i],arr[j+1]);
                    ans++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    } return 0;
}
