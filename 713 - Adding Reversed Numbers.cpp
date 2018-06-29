// iftakhar ahmed ifat//

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    int len1, len2, a, b, c, d, t, carry, sum, i, len, z;
    char num1[1000], num2[1000], ans[1000];

    cin >> t;

    while(t--)
    {
        cin >> num1 >> num2;

        len1 = strlen(num1);
        len2 = strlen(num2);

        if(len1 > len2)
        {
            for(i = len2; i < len1; i++)
            {
                num2[i] = '0';
            }
            num2[i] = '\0';
        }

        else if(len1 < len2)
        {
            for( i = len1; i < len2; i++)
            {
                num1[i] = '0';
            }
            num1[i] = '\0';
        }

        len = strlen(num1);
        sum = 0;
        carry = 0;

        for( i = 0; i < len; i++)
        {
            a = num1[i] - 48;
            b = num2[i] - 48;

            sum = a + b + carry;

            if(sum <= 9)
            {
                ans[i] = sum + 48;
                carry = 0;
            }

            else if(sum > 9)
            {
                sum = sum % 10;
                ans[i] = sum + 48;
                carry = 1;
            }
        }
        if(carry == 1)
        {
            ans[i] = carry + 48;
            i ++;
        }
        ans[i] = '\0';
        len = i;

        for( z = 0; z < len; z ++)
        {
            if(ans[z] != '0')
                break;
        }

        for(int i = z; i < len; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
