#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0&&b==c&&c==0)
            break;

        d=a*a;
        e=b*b;
        f=c*c;

        if(d+e==f)
            printf("right\n");
        else if(d+f==e)
            printf("right\n");
        else if(e+f==d)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
