#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,h;
    float b,c,d,ac,s;
    h=1;

    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        scanf("%f %f %f",&b,&c,&d);
        ac=0;
        s=0;

        if(a==1)
        {
            ac=(c-b)/d;
            s=b*d+.5*(ac*d*d);

        }
        else if(a==2)
        {
            ac=(c-b)/d;
            s=b*ac+.5*(d*ac*ac);
        }
        else if(a==3)
        {
            s=sqrt(b*b+2*c*d);
            ac=(s-b)/c;

        }
        else{
            s=sqrt(b*b-2*d*c);
            ac=(b-s)/c;
        }
        printf("Case %d: %.3f %.3f\n",h++,s,ac);
    }
    return 0;
}
