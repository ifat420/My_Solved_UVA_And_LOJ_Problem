#include <bits/stdc++.h>

using namespace std;

vector <int> check (long long int n)
{
   long long int b, c;
    vector <int> rev;

    while(n != 0)
    {
        b = n % 10;
        c = n / 10;
        n = c;
        rev.push_back(b);
    }
    return rev;
}

int main()
{
    vector <int> num1, num2;
    long long int n1, n2, l, carry, sum, ans;


    while(cin >> n1 >> n2)
    {
        ans = 0;
        if (n1 == 0 && n2 == 0)
            break;

        num1 = check(n1);
        num2 = check(n2);

        if(num1. size() > num2. size()) l = num1.size();
        else l = num2.size();

        sum = 0;
        carry = 0;

        for(int i = 0; i < l; i++)
        {
            sum = carry + num1[i] + num2[i];

            if(sum > 9)
            {
                carry = 1;
                ans ++;
            }
            else
                carry = 0;
        }

        if(ans == 0)  cout << "No carry operation." << endl;
        else cout << ans << " carry operation." << endl;
    }
}
