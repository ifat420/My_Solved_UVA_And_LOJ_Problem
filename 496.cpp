#include<iostream>

using namespace std;

int main()
{
    long long unsigned num , lim, a, t, b, i;

    t = 0;

    while(cin >> num >> lim)
    {
        b = 0;
        a = 0;

        if(lim < 0 && num < 0)
            break;
        t++;
        num = a;

          while(a != 1 )
    {
        i++;
        if(a >= 303){if(b > lim){cout << "Case "<< t <<": A = "<< num << ", limit = " <<  lim << ", number of terms = " << i << endl; break;}

        if(a%2==0)
            a = a/2;
        else
            a = 3 * a + 1;
    }


            //
        }
        cout << "Case "<< t <<": A = "<< num << ", limit = " <<  lim << ", number of terms = " << a << endl;

    }
}
