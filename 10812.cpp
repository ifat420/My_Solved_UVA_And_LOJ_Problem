#include<stdio.h>

int main()
{
    int a,b,c,d,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);
        c=d=0;
        if(a==0&&b==0)
            printf("%d %d\n",a,b);
        else
            if(a>b)
            {
                c=(a+b);
                d=(a-b);
                if(c%2==0&&d%2==0)
                    printf("%d %d\n",c/2,d/2);
                else
                    printf("impossible\n");


            }
            else
                printf("impossible\n");



    }
    return 0;

}
