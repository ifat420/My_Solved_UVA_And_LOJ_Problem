#include<iostream>
#include<vector>
#include<cstdio>
#include<list>

using namespace std;

int main()
{
    int pNum, butget, hNum, wkNum, hCost, j, temp;

    int minCost[100000], wkns[100000];

    while(cin >> pNum >> butget >> hNum >> wkNum)
    {
        j= 0;
        temp = 0;

        while(hNum--)
        {
            int m = 0;

            cin >> hCost;
            for(int i = 0; i < wkNum; i++)
            {
                cin >> wkns[i];
            }
            for(int i = 0; i < wkNum; i++)
            {
                if(wkns[i] >= pNum)
                {
                    if(m == 1)break;
                    minCost[j] = hCost * pNum;
                    j++;
                    m = 1;

                }
            }

        }
        for(int i = 0; i < j; i++)
        {
            for(int k = i; k < j - 1; k++ )
            {
                if(minCost[i] < minCost[k+1])
                {
                    temp = minCost[i];
                    minCost[i] = minCost[k+1];
                    minCost[k+1] = temp;
                }

            }
        }
        if(butget >= minCost[j - 1])
            cout << minCost[j-1] << endl;
        else
            cout << "stay home" << endl;
    }
    return 0;
}
