// iftakhar ahmed ifat//

#include<bits/stdc++.h>

using namespace std;

int main()
{
     long double t, a, b, c, d, e, f;

    cin >> t;

    while(t--)
    {
        d = 0;
        cin >> a >> b >> c;

        d = pow(a, b);

        cout << d % c << endl;
    }
}
