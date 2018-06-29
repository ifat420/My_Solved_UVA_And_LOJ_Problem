#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        b=a%10;
        printf("%d",b);

    }
}
