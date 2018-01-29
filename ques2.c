#include<stdio.h>
#include<math.h>
void main()
{
    int k,l,temp,c=0,i,x,ten=1;
    unsigned long long n,j;
    scanf("%llu %d",&n,&k);
    j=n;
    while(j!=0)
    {
        c++;
        j=j/10;
    }
    //printf("%d\n",c);
    l=c-k;
    j=n;
    while(l>0)
    {
        j=j/10;
        //printf("%llu\n",j);
        l--;
    }

    for(i=0;i<c-k;i++)
        ten=ten*10;

    j=j*ten;
    n=n-j;
int arr[c-k];
for(i=0;i<c-k;i++)
{
    arr[i]=n%10;
    n=n/10;
}
for(i=0;i<c-k;i++)
{
    for(x=0;x<c-k-i-1;x++)
    {
        if(arr[x]>arr[x+1])
        {
            temp=arr[x];
            arr[x]=arr[x+1];
            arr[x+1]=temp;
        }
    }
}
for(i=0;i<c-k;i++)
    printf("%d",arr[i]);
}
