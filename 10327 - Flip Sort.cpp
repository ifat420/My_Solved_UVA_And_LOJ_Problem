#include<stdio.h>

int main()
{
    int b,i,n,p[1050],j,temp;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        b=0;
        temp=0;
        for(i=1;i<n;i++)
        {
            for(j=n-1;j>=i;j--){
                if(p[j-1]>p[j]){
                    temp=p[j-1];
                    p[j-1]=p[j];
                    p[j]=temp;
                    b++;
                }


            }
        }

        printf("Minimum exchange operations : %d\n",b);
    }
    return 0;
}
