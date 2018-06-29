#include<iostream>

using namespace std;

int main()
{
    long long unsigned int l, h , gn, num, j, max, i;

    while(cin >> l >> h)
    {
        if(l == 0 && h == 0)
            break;
        if (l > h)
        {
            int temp = h;
            h = l;
            l = temp;

        }

        max = 0;
        num = 0;

        for( i = l; i <= h; i++)
        {
            gn = 0;
            if(i == 1) {j = 4 ;gn = 1;}
            else j = i;
            while(j != 1)
            {
                gn ++;
                if(j % 2 == 0)
                {
                    j = j / 2;
                }
                else
                {
                    j = 3 * j + 1;
                }

            }
            if(max < gn)
            {
                max = gn;
                num = i;
            }
        }
        cout << "Between " << l <<" and " << h << ", " <<  num << " generates the longest sequence of " << max << " values." << endl;
    }
    return 0;
}
