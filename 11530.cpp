#include<stdio.h>
#include<string.h>

int main()
{
    int t,a,e,m,v,b;
    char ch[115];

    scanf("%d",&t);
    getchar();


    v=1;

    while(t--)
    {

        gets(ch);

        b=strlen(ch);
         e=m=0;

        for(a=0;a<b;a++)
        {
            if(ch[a]=='a'|| ch[a]=='d' || ch[a]=='g' || ch[a]=='j' || ch[a]=='m' || ch[a]=='p' || ch[a]=='t' || ch[a]=='w' || ch[a]==' ')
                e=1;
            else if(ch[a]=='b'|| ch[a]=='e' || ch[a]=='h' || ch[a]=='k' || ch[a]=='n' || ch[a]=='q' || ch[a]=='u' || ch[a]=='x' )
                e=2;
            else if(ch[a]=='c'|| ch[a]=='f' || ch[a]=='i' || ch[a]=='l' || ch[a]=='o' || ch[a]=='r' || ch[a]=='v' || ch[a]=='y')
                e=3;
            else if(ch[a]=='s'|| ch[a]=='z' )
                e=4;

            m=m+e;
        }

        printf("Case #%d: %d\n",v++,m);

    }
    return 0;
}
