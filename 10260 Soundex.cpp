#include<stdio.h>
#include<string.h>

int main()
{
    char ch[50];

    int a,b,l,i,j;
    l=0;

    while(gets(ch))
    {
        l=strlen(ch);

         if(ch[0]=='B' || ch[0]=='F' || ch[0]=='P' || ch[0]=='V')
                printf("1");
            else if(ch[0]=='C' || ch[0]=='G' || ch[0]=='J' || ch[0]=='K' || ch[0]=='Q' || ch[0]=='S' || ch[0]=='X' || ch[0]=='Z')
                printf("2");
            else if(ch[0]=='D' || ch[0]=='T')
                printf("3");
            else if(ch[0]=='L')
                printf("4");
            else if(ch[0]=='M' || ch[0]=='N')
                    printf("5");
            else if(ch[0]=='R')
                printf("6");

        for(i=1;i<l;i++)
        {
            if(ch[i]!=ch[i-1]){
                        if(ch[i]=='B' || ch[i]=='F' || ch[i]=='P' || ch[i]=='V')
                            printf("1");
                        else if(ch[i]=='C' || ch[i]=='G' || ch[i]=='J' || ch[i]=='K' || ch[i]=='Q' || ch[i]=='S' || ch[i]=='X' || ch[i]=='Z')
                            printf("2");
                        else if(ch[i]=='D' || ch[i]=='T')
                            printf("3");
                        else if(ch[i]=='L')
                            printf("4");
                        else if(ch[i]=='M' || ch[i]=='N')
                                printf("5");
                        else if(ch[i]=='R')
                            printf("6");
            }
        }
        printf("\n");
    }
}
