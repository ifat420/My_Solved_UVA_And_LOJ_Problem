#include<stdio.h>

int main()
{
    int m,n,o,p,i,j,k;

    while(scanf("%d %d %d %d",&m,&n,&o,&p)==4)
    {
        i=0;
        j=0;
        k=0;
        if(m==0&&n==0&&o==0&&p==0){
            break;
        }
        i=(o*60)+p;
        j=(m*60)+n;
        k=i-j;
        if(k>0){
            printf("%d\n",k);
        }
        else{
             i=((24+o)*60)+p;
            j=(m*60)+n;
            k=i-j;
            printf("%d\n",k);
        }


    }
    return 0;

}
