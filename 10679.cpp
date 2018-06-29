#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string str1, str2;
    int t, q;

    cin >> t;

    while(t--)
    {
        cin >> str1;
        cin >> q;

        while(q--)
        {
            cin >> str2;

            size_t found = str1.find(str2);
            if(found != string :: npos)
                cout << "y\n";
            else
                cout << "n\n";
        }
    }

    return 0;
}
