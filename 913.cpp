#include<stdio.h>

int main()
{
    int a,b,c,d,e,i;

    while(scanf("%d",&a))
    {
        b=0;
        for(i=1;i<a;i+=2)
        {
            b=b+i;

        }
        printf("%d\n",b);

    }
}
