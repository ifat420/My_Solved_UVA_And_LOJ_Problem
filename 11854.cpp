#include<stdio.h.>
#include<math.h>

int main()
{
    float a,b,c,d,e;


    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
    {
         if(a==0&&b==0&&c==0)
            break;
         e=0;
         d=0;
        d=(a*a)+(b*b);
        e=sqrt(d);
        if(e==c)
            printf("right\n");
        else
            printf("wrong\n");

    }
    return 0;
}
