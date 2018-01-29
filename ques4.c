#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    char s[1000],b[1000],a[1000];
    int i,j,l1,l2,count=0;
    gets(s);
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
            break;
        b[i]=s[i];
        i++;
    }
    b[i]='\0';


    j=0;
    i++;
     while(s[i]!='\0')
    {

        a[j]=s[i];
        j++;
        i++;

    }

    a[j]='\0';

    l1=strlen(b);


    l2=strlen(a);

    if(l2>l1)
    {for(j=l1+1;j<=l2;j++)
        count=count+j;
        {
            for(i=0;i<l1;i++)
            {
                if(b[i]!=a[i])
                    count=count+abs(a[i]-b[i]);
            }
        }
    }
    else if(l1>l2)
    {for(j=l2+1;j<=l1;j++)
        count=count+j;
        for(i=0;i<l2;i++)
        {
            if(a[i]!=b[i])
                count=count+abs(a[i]-b[i]);
        }
    }
    else{
        for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
                count=count+abs(a[i]-b[i]);
        }
    }
    printf("%d",count);
}
