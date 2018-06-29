#include<stdio.h>

int main()
{
    int a,b,c;
    a=0;
    b=0;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        c=0;
        c=a*b;
        printf("%d\n",c-1);
    }
    return 0;
}
