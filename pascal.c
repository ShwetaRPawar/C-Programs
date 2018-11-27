#include<stdio.h>
void main()
{
int n,i,j,k=0;
printf("\nlines:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n-i;j++)
	{
	printf(" ");
	}
k=0;
while(k!=2*i-1)
{
printf("*");
k++;
}
printf("\n");
}
}
