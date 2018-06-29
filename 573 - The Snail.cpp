#include <bits/stdc++.h>

using namespace std;


int main()
{
    float h, u, d, f, total, day;

    f = u = d = f = total = day = 0;
    while(cin >> h >> u >> d >> f && h)
    {
        total = 0;
        day = 0;
        f = (f/100) * u;
    while(1)
    {
        day++;

        if(u > 0)total+=u;

        u = u - f;

        if(total > h)break;
        total-=d;

        if(total < 0)break;
    }

    if(total > 0)cout << "success on day " << day << endl;
    else
        cout << "failure on day " << day << endl;

    }
    return 0;

}
