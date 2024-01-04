#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,e=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            s=s+1;
            if(i%2==0)
            {
                e=e+1;
            }
        }
    }
    if(e==s)
    printf("True");
    else
    printf("False");
}