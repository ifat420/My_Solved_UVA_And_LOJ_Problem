#include<stdio.h>

int main()
{
    float t1,t2,t3,a,ct[3],k,l,temp;
    int i,j,t,g;

    scanf("%d",&t);
    g=1;
    while(t--)
    {
        k=0;
        l=0;
        scanf("%f %f %f %f %f %f %f",&t1,&t2,&t3,&a,&ct[0],&ct[1],&ct[2]);
         for(i=0;i<3;i++){
            for(j=i;j<2;j++){
                if(ct[j+1]<ct[i]){
                    temp=ct[i];
                    ct[i]=ct[j+1];
                    ct[j+1]=temp;
                }
            }
        }
        k=(ct[1]+ct[2])/2;
        l=t1+t2+t3+a+k;
        if(l>=90)
            printf("Case %d: A\n",g++);
        else if(l>=80&&l<90)
            printf("Case %d: B\n",g++);
        else if(l>=70&&l<80)
            printf("Case %d: C\n",g++);
        else if(l>=60&&l<70)
            printf("Case %d: D\n",g++);
        else
            printf("Case %d: F\n",g++);


    }
    return 0;
}
