#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,t,g;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        e=0;
        d=0;
        f=0;
        g=0;
        e=a+b;

        while(e>=c)
        {

            d=e/c;
            f=f+d;
            e=d+e%c;
        }
        printf("%d\n",f);
    }
    return 0;
}
