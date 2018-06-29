#include<stdio.h>



int main()
{
     long long int a,b,c,i,j,l,p;



    while(scanf("%lld",&a)==1)
        {
            if(a==0)
                break;
        l=0;
        p=0;
        l=a/2;
       for(j=1;j<=l;j++)
       {
           for(i=1;i<=l;i++)
           {
               if((j*j*j)-(i*i*i)==a){
                    p=1;
                    printf("%lld %lld\n",j,i);
                    break;
               }
               if(p==1)
                    break;
           }
       }
        if(p==0)
        {
            printf("No solution\n");
        }
    }
    return 0;
}
