#include<stdio.h>

int main()
{
    int t,n,k,p,i,a;
    t=0;

    scanf("%d",&t);
    a=1;
    while(t--){

        scanf("%d%d%d",&n,&k,&p);

        for(i=1;i<=p;i++){
            if(k==n){
            k=0;
            }
            k++;


        }
       if(k==0)
            printf("Case %d: %d\n",a++,n);

        else if(k<=n)
            printf("Case %d: %d\n",a++,k);
    }



    return 0;
}
