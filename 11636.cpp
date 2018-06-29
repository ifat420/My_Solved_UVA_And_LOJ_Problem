#include<stdio.h>

int main()
{
    int p,i,a,b,c,d,e;

    c=0;
    while(scanf("%d",&p)&&p>-1)
    {
        c++;
        a=1;
        d=0;
        for(i=1;i<p;i++)
        {
            a=a*2;
            d++;
            if(a==p)
                break;
            else if(a>p)
                break;
            }
        printf("Case %d: %d\n",c,d);

    }
}
