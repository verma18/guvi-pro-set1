#include<stdio.h>
void main()
{
    unsigned long long n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(n%2==0)
    {
        if(a==b)
        {
            if((n/(a+b))%2!=0)
                printf("YES");
            else
                printf("NO");
        }
        else{
            if((n/(a+b))%2==0)
                printf("YES");
            else
                printf("NO");
        }
    }
    else
        printf("NO");
}
