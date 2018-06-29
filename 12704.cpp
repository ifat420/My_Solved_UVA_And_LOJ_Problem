#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,a,b;
    int t;
    t=0;
    scanf("%d",&t);
    while(t--){
        scanf("%f %f %f",&x,&y,&r);
        a=(x*x)+(y*y);
        b=sqrt(a);
        printf("%.2f %.2f\n",r-b,r+b);

    }
    return 0;
}
