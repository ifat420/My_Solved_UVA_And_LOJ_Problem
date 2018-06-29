#include<stdio.h>
int main()
{
    int c,i,j,k,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        c=0;
        for(i=1;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<=n;k++)
                {
                    if(i+j>k&&j+k>i&&k+i>j)
                        c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
