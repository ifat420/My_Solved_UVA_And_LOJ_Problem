#include<stdio.h>

int main()
{
    int long  n,k,j=0;

    while(scanf("%ld %ld",&n,&k)!=EOF)
    {
        j=n+(n-1)/(k-1);
        printf("%ld\n",j);

    }
    getchar();

}
