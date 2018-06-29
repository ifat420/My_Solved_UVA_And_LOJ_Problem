#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,k,l,m,o,n;

    char ch[200000];

   while(gets(ch))
   {
       k=0;
       l=0;
       m=0;
       n=0;
       o=0;
       j=strlen(ch);

       for(i=0;i<j;i++)
       {
           k=k*10+ch[i]-'0';
           k=k%4;
           m=m*10+ch[i]-'0';
           m=m%100;
           l=l*10+ch[i]-'0';
           l=l%400;
           n=n*10+ch[i]-'0';
           n=n%15;
           o=o*10+ch[i]-'0';
           o=o%55;

       }
       if(k==0&&m!=0)
       {
           printf("This is leap year.\n");
           if(n==0)
                printf("This is huluculu festival year.\n");
           else if(o==0)
                printf("This is bulukulu festival year.\n");
       }
       else if(l==0)
       {
             printf("This is leap year.\n");
            if(n==0)
                printf("This is huluculu festival year.\n");
           else if(o==0)
                printf("This is bulukulu festival year.\n");
       }
       else if(n==0)
       {
           printf("This is huluculu festival year.\n");
       }
       else
            printf("This is an ordinary year.\n");

       printf("\n");
}
return 0;
}
