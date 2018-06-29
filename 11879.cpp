#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[50000];

    int  mod17, l;

    while(cin >> ch)
    {

        if(ch[0] == '0')
            break;

        mod17 = 0;
        l = strlen(ch);
        for(int i = 0; i < l; i++)
        {
             mod17 = (mod17 * 10 + ch[i] - '0') % 17;

        }

        if(mod17 == 0) cout << "1" << endl;
        else cout << "0" << endl;

    }
    return 0;
}
