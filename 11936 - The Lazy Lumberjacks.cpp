#include<stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d",&t);

    while(t--){

    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c){
        if(b+c<=a)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    else if(b>a&&b>c){
        if(a+c<=b)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    else if(c>a&&c>b){
            if(a+b<=c)
                printf("Wrong!!\n");
            else
                printf("OK\n");
    }
    else
        printf("OK\n");

    }


}
