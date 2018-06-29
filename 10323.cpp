#include<stdio.h>
#include<math.h>
int main()
{
     float a,i,sum;

    while(scanf("%lld",&a)!=EOF){
            sum=1;
        for(i=1;i<=a;i++){
            sum=sum*i;
        }
        if(log10(sum)<log10(10000))
            printf("Underflow!\n");
        else if(log10(sum)>log10(6227020800))
            printf("Overflow!\n");
        else
            printf("%lld\n",sum);
    }
    return 0;
}
