#include<stdio.h>

int main()
{
    int a[120],n,c,d,e,f,i,h;
    h=1;

    while(scanf("%d",&n)==1){
        if(n==0)
            break;

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        c=0;
        d=0;
        e=0;
        f=0;
        for(i=0;i<n;i++){
            c=c+a[i];
        }
        d=c/n;
        for(i=0;i<n;i++){
            if(a[i]>d)
                e=a[i]-d;
            else
                continue;
            f=f+e;


        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",h++,f);
    }
    return 0;
}

