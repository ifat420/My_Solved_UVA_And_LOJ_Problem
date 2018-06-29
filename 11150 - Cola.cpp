#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;

    while(scanf("%d",&h)==1)
    {
        a=h;
        b=c=d=f=e=0;

        while(a!=0){

                b=a%3;

            c=a/3;
            g=a-(c*3);

            f=f+c;
            if(a>=3)
                a=b+c;
            else
                a=c;

        }
        if(b==2)
        {
            printf("%d\n",h+f+1);
        }
        else
            printf("%d\n",h+f);

    }
    return 0;
}

