#include<stdio.h>
#include<string.h>

int main()
{
    int t,p;
    char  s[100100], z[1000],*k;



    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        scanf("%d",&p);
        getchar();
        while(p--)
        {
            gets(z);
            k=strstr(s,z);
            if(k)
                printf("y\n");
            else
                printf("n\n");

        }
    }
}
