#include<bits/stdc++.h>

using namespace std;

int main()

{

    //freopen("ifat.txt", "r", stdin);
    long long  t, day, pNum, p[120], ans, total, fri, sat;

    cin >> t;

    while(t--)
    {
        cin >> day;
        cin >> pNum;

        for(int i = 0; i < pNum; i++)
        {
            cin >> p[i];
        }

        total = 0;


        for(int i = 1; i <= day; i++)
        {
            ans = 0;
            if(i % 7 == 6 || i % 7 == 0)continue;

            for(int j = 0; j < pNum; j++)
            {
                if(ans == 1) break;

                    if(i % p[j] == 0)
                        {
                            ans ++;
                        }


            }

            total = total + ans;
        }

        cout  << total <<endl;


    }
    return 0;


}
