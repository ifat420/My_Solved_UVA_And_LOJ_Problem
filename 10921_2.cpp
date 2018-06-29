#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,i;
    char ch[50];

    while(gets(ch))
    {
        b=strlen(ch);
        for(i=0;i<b;i++){
        if(ch[i]=='A'|| ch[i]=='B' || ch[i]=='C')
                printf("2");
        }
    }

}

