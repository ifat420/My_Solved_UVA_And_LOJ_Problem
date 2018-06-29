#include<stdio.h>

int main()
{
    int a,i,j,k,m=0;

    int w[1000];

    while(scanf("%d",&a)!=EOF)
    {
        i=0;
        j=0;
        if(a==0)
            break;
        m=a;
        while(m>0)
    {
        w[i]=m%2;
        i++;
        m=m/2;
    }
    k=0;
    for(j=i-1;j>=0;j--)
    {
        if(w[j]==1)
            k++;
    }
    printf("The parity of ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",w[j]);
    }
    printf(" is %d (mod 2).\n",k);
}
}
