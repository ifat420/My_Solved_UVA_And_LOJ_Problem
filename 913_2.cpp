#include<stdio.h>

int main()
{
    long long int a,b,e,i,t,j;

    while(scanf("%lld",&a)==1)
    {
        b=0;
        for(i=1;i<a;i=i+2)
        {
            b=b+i;
        }
        b=b+a;
      e=1;
      t=0;
      while(1){
        e=e+2;
        t++;
        if(t==b)
            break;
      }
      printf("%lld\n",((e-2)+(e-4)+(e-6)));
    }
}
