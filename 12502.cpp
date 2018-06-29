#include<stdio.h>

int main()
{
    float a,b,z,e,f,g,i,h;
    int t;

        f=0;
        g=0;
        h=0;
        i=0;
        t=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%f %f %f",&a,&b,&z);

        f= ((z /(a+b)) * a);

        g=(z/(a+b));
        h=(a-b);
        i=(f+(g*h));
        printf("%.0f\n",i);
    }
    return 0;
}
