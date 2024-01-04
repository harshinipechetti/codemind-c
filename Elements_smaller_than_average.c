#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    int avg=s/n,d=0;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        d=d+1;
    }
    printf("%d",d);
}