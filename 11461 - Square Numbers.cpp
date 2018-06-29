#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,i,j,f;
    int c,d,e;

    while(scanf("%f %f",&a,&b))
    {
        if(a==0&&b==0)
            break;
        c=0;
        f=0;
        for(i=a;i<=b;i++){
            f=sqrt(i);
            for(j=a;j<=b/2;j++){
                if(f==j){
                    c++;
                    break;
                }
            }

        }
        printf("%d\n",c);
    }
    return 0;

}
