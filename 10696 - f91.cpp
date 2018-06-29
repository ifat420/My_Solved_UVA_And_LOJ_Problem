#include<stdio.h>

int main()
{
    int a;

    while(scanf("%d",&a)!=EOF){
        if(a==0){
            break;
        }
        if(a<=100){
            printf("f91(%d) = 91\n",a);
        }
        else
            printf("f91(%d) = %d\n",a,a-10);
    }
    return 0;
}
