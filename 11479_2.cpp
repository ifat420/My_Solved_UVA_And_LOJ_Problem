#include<stdio.h>

int main()
{
    signed long int a,b,c,t,e;

    scanf("%d",&t);
    e=1;
    while(t--)
    {
        scanf("%ld %ld %ld",&a,&b,&c);

        if(a+b>c&&b+c>a&&c+a>b)
        {
            if(a==b&&b==c&&c==a)
                printf("Case %d: Equilateral\n",e++);
            else if (a!=b&&b!=c&&c!=a)
                printf("Case %d: Scalene\n",e++);
            else if(a==b||b==c||c==a)
                printf("Case %d: Isosceles\n",e++);
        }
        else{
            printf("Case %d: Invalid\n",e++);
        }
    }
}
