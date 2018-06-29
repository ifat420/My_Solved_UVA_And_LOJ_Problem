#include<stdio.h>

int main()
{
    int a,e,f,i,g;
    int b[150];


    while(scanf("%d",&g)==1)
    {
        if(g<0)
            break;
        if(g==0)
            printf("%d",g);
        a=0;
        e=0;
        f=0;

        while(g!=0)
        {
          e=g%3;
          f=g/3;
           b[a++]=e;
           g=f;
        }
        while(a--)
        {
            printf("%d",b[a]);
        }
        printf("\n");

    }
    return 0;
}



