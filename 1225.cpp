#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];

    int i,j,q;

    for(i=0;i<50;i++)
    {
        ch[i]=(char)i;

    }
    ch[i]='\0';

    puts(ch);
}
