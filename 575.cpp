#include<iostream>
#include<cstring>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    string ch;
    int sum, temp, l, p;

    while(cin >> ch)
    {
        if(ch[0] == '0')
            break;
        l = ch.size();
        temp = 0;
        sum = 0;
        p = l;

        for(int i = 0; i < p; i++)
        {
            temp = (ch[i] - '0') * (pow(2, l) - 1);
            sum = sum + temp;
            l--;

        }
        cout << sum << endl;
    }
}
