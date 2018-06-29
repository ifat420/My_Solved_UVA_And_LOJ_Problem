#include<stdio.h>

int main()
{
    long long int n[1000];
    long long int a,b,c,d,e,f,g,h,i,j,k,t;

    while(scanf("%lld",&a)==1)
    {
        b=0;
        for(i=1;i<a;i=i+2)
        {
            b=b+i;
        }
         t=0;
    c=1;
    while(1)
    {
        c=c+2;
        t++;
        if(t==b)
            break;
    }
    t=0;
    e=c;
    f=0;

    k=0;
    while(1)
    {
        e=e+2;
        n[k++]=e;
          t++;

        if(t==(a))
            break;
    }

    printf("%lld\n",((n[a-1]-2)+(n[a-2]-2)+(n[a-3]-2)));




    }


}
