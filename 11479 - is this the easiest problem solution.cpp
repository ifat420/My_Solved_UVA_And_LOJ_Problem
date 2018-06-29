#include<stdio.h>

int main()
{
    int t,i,j,a,b,c,e;

    scanf("%d",&t);
    e=1;
    while(t--)
    {
        scanf("%d %d %d ",&a,&b,&c);

        if(a+b>c&&a+c>b&&b+c>a)
        {
            if(a==b&&b==c&&a==c)
                printf("Case %d: Equilateral\n",e++);
            else if(a==b||b==c||a==c)
                printf("Case %d: Isosceles\n",e++);
            else if(a!=b&&b!=c&&a!=c)
                printf("Case %d: Scalene\n",e++);
        }
        else{
            printf("Case %d: Invalid\n",e++);
        }
    }
    return 0;
}
