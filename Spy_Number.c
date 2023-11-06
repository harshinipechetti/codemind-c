#include<stdio.h>
int main()
{
	int n,i,r,s=0,m=1;
	scanf("%d",&n); 
while(n!=0)
{
	r=n%10;
	s=s+r;
	n=n/10;
	m=m*r;
}
if(s==m)
{
	printf("Spy Number");
}
else
{
    printf("Not Spy Number");
}
}