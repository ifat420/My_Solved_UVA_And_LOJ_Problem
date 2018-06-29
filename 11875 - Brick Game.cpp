#include<stdio.h>

int main()
{
    int i,j,l,m,a[20],t,temp,c;

    scanf("%d",&t);
    c=1;
    while(t--){
        m=0;
        scanf("%d",&l);

        for(i=1;i<=l;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=l;i++){
            for(j=i;j<=l-1;j++){
                if(a[i]<a[j+1]){
                    temp=a[i];
                    a[i]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        m=l/2;
        printf("Case %d: %d\n",c++,a[m+1]);
    }
    return 0;
}
