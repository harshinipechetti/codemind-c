#include<stdio.h>
int main()
{
    int n,i,t1=0,t2=1,t;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        t=t1+t2;
        t1=t2;
        t2=t;
        printf("%d ",t);
    }
}