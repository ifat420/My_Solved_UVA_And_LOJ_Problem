#include<stdio.h>

int main()

{
    int st[60];
    int a,b,c,d,e,f,g;

    scanf("%d",&a);
    for(b=0;b<a;b++){
        scanf("%d",&st[b]);
    }
    c=0;
    for(b=0;b<a;b++){
        c=c+st[b];
        }
        d=c/a;
        e=0;
        g=0;
        for(b=0;b<a;b++){
            if(st[b]>d)
                e=st[b]-d;
            //else
                //e=b-st[b];
            g=g+e;
        }
        printf("%d  %d",d,g);

}
