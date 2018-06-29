#include<stdio.h>

int main()
{
    int t,j;
    double a[1020],k,l,c,m,i;



    scanf("%d",&t);
    while(t--)

    {
        k=0;
        l=0;

        m=0;


        scanf("%lf",&i);
        for(j=0;j<i;j++)
        {
            scanf("%lf",&a[j]);
        }
        k = 0;
        for(j=0;j<i;j++)
        {
            k=k+a[j];


        }
        l=k/i;
        c=0;
        for(j=0;j<i;j++)
        {
          if(a[j]>l)
          {
            c++;
          }
        }
        m=(c/i)*100;
        printf("%.3lf%%\n",m);

    }

    return 0;




}
