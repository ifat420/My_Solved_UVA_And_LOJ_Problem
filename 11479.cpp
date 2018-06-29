#include<stdio.h>

int main()
{
    signed long int tr[20];
    int  c,i,j,temp,t;

    scanf("%d",&t);
    c=1;
    while(t--){
            temp=0;
        for(i=0;i<3;i++){
            scanf("%ld",&tr[i]);
        }
        for(i=0;i<3;i++){
            for(j=i;j<2;j++){
                if(tr[j+1]<tr[i]){
                    temp=tr[i];
                    tr[i]=tr[j+1];
                    tr[j+1]=temp;
                }
            }
        }
       if(tr[0]==tr[1]&&tr[0]==tr[2]&&tr[1]==tr[2])
            printf("Case %d: Equilateral\n",c++);
        else if(tr[0]+tr[1]<tr[2])
            printf("Case %d: Invalid\n",c++);
        else if(tr[0]==tr[1]||tr[0]==tr[2]||tr[1]==tr[2])
            printf("Case %d: Isosceles\n",c++);
        else
            printf("Case %d: Scalene\n",c++);


    }
    return 0;
}
