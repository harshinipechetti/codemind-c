#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2!=0)
        {
            s=s+1;
        }
        o=o+1;
        }
    }
    if(s==o)
    printf("True");
    else
    printf("False");
}