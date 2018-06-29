#include<stdio.h>

int main()
{
    int a[5050],b,c,d,e,i,j,temp;

    while(scanf("%d",&b))
    {
        if(b==0)
            break;
        temp=0;

        e=0;
        for(i=0;i<b;i++)
        {
            scanf("%d",&a[i]);
        }

         for(i=0;i<b;i++){
            for(j=i;j<b-1;j++){
                if(a[i]>a[j+1]){
                    temp=a[i];
                    a[i]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        d=a[0];
        for(i=1;i<b;i++){
            d=d+a[i];
            e=e+d;
        }
        printf("%d\n",e);
    }
    return 0;
}
