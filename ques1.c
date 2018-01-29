#include<stdio.h>
#include<stdlib.h>
struct a{
char s[100];
};
void main()
{
    int n,i,count=0,l,j;
    scanf("%d",&n);
    struct a b[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",b[i].s);

    }
        //printf("%s",b[0].s);
        l=strlen(b[0].s);
    for(i=0;i<n-1;i++)
    {if(count>0)
    l=count;
    count=0;
        for(j=0;j<l;j++)
        {
            if(b[i].s[j]==b[i+1].s[j])
                count++;
        }


    }
    for(i=0;i<count;i++)
        printf("%c",b[0].s[i]);

}
