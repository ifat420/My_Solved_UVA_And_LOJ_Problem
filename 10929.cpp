#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k;
    char ch[1050];


    while(1)
    {
        k=0;
        scanf("%s",&ch);
         j=strlen(ch);
        for(i=0;i<j;i++)
        {
            k=k*10+ch[i]-'0';
            k=k%11;
        }
        if(k==0&&j==1)break;
        else if(k==0)
            printf("%s is a multiple of 11.\n",ch);
        else
            printf("%s is not a multiple of 11.\n",ch);
    }
    return 0;
}
