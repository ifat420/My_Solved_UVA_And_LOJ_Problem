#include<iostream>

using namespace std;



int main()
{
    long int n, b, h, w, a, p, min;
    bool it;


    while(cin >> n >> b >> h >> w)
    {
        min = 999999999;

        for(int i = 0; i < h; i++)
        {
            cin >> a;

            for(int i = 0; i < w; i++)
            {
                cin >> p;

                if(p >= n)
                {
                    if(b >= n * a)
                    {
                        if(min > n * a)
                        {
                            min = n * a;
                        }
                    }

                }
            }
        }

         if(min <= b) cout << min << endl;
         else cout << "stay home" << endl;
    }

}
