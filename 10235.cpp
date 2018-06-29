#include<stdio.h>
#include<math.h>

 long long int invrc(long long int a);
long long int prime(long long int b);

 int main()
{
    long long int e,f,g=0,h=0;

    while(scanf("%lld",&e)==1)
    {
        if(e==1)
            printf("%lld is prime.\n",e);
        else if(e==2)
              printf("%lld is prime.\n",e);
        else if(e==3)
              printf("%lld is prime.\n",e);
        else if(e==4)
              printf("%lld is not prime.\n",e);
        else{

        f=prime(e);
        if(f==0)
        {
           g=invrc(e);
           h=prime(g);
           if(h==0&&e>9){
            printf("%lld is emirp.\n",e);
           }
           else{
            printf("%lld is prime.\n",e);
           }
        }
        else
            printf("%lld is not prime.\n",e);
    }
    }
    return 0;

}
long long int invrc(long long int a)
{
    long long int b,c=0,d=0,e=0;
    b=a;
    while(b!=0){
        e=b/10;
        c=b%10;
        d=d*10+c;
        b=e;
    }
    return d;
}

long long int prime(long long int b)
{
    long long int i,v=0;

    for(i=2;i<=b/2;i++)
    {
        if(b%i==0){
            v++;
            break;
        }

    }
    return v;
}


