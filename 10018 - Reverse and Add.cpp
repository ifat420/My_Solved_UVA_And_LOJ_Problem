#include<stdio.h>

long long int z = 0;
long long int x = 0;

long long int revrs(long long int a);
long long int rev(long long int a);

int main()
{
    long long int a,b,c,t,v;

    scanf("%lld",&t);

    while(t--)
    {
        z = 0;
        x = 0;
        scanf("%lld",&a);


        if(a == rev(a))
        {
            z = 1;
            a = a * 2;

        c=revrs(a);
        printf("%lld %lld\n",z, c);
        }
        else
        {
           c=revrs(a);
            printf("%lld %lld\n",x, c);
        }

}
    return 0;
}


long long int revrs(long long int a)
{

    long long int e=0,f=0,g=0,i;
    i=0;
    i=a;

    while(a!=0){
        e=a%10;
        f=a/10;
        g=g*10+e;
        a=f;
    }
  if(i==g){
        return g;
  }
  else
    z++;
    x++;
    revrs(i+g);

}

long long int rev(long long int a)
{

    long long int e=0,f=0,g=0,i;
    i=0;
    i=a;

    while(a!=0){
        e=a%10;
        f=a/10;
        g=g*10+e;
        a=f;
    }
        return g;
  }

