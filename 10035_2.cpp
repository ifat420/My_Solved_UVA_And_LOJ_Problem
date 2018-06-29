#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long unsigned int num1, num2, n1, n2, p, q,  r, ans, z;

    //freopen("ifat.txt", "r", stdin);

    while(cin >> num1 >> num2)
    {
        if(num1 == 0 && num2 == 0)
            break;
        p = 0;
        q = 0;
        r = 0;
        n1 = 0;
        n2 = 0;
        ans = 0;

        while(num1 || num2)
        {
            n1 = num1 % 10;
            n2 = num2 % 10;

            p = num1 / 10;
            q = num2 / 10;

            num1 = p;
            num2 = q;

            if((n1 + n2 + r) > 9)
            {
                ans++;
                r = 1;
            }
            else
                r = 0;
        }
       if(ans == 0)
        cout << "No carry operation." << endl;
    else if(ans == 1)
         cout << "1 carry operation." << endl;

       else
            cout << ans << " carry operations." << endl;
    }
    return 0;
}
