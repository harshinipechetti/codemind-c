#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se=0,so=0,d;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        {
            so=so+a[i];
        }
    }
    if(se>so)
    {
        d=se-so;
    printf("%d",d);
    }
    else
    {
        d=so-se;
        printf("%d",d);
    }
}