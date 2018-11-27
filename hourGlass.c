#include<stdio.h>
int main()
{
int i,n,j;
printf("\n line:");
scanf("%d",&n);
int n1=n*2;
n1=n1-2;
int p=2;
//printf("\n%d",n1);
for(i=0;i<=n1;i++)
{
if(i<n)
{

int k=i;
	while(k!=0)
	{
	printf(" ");
	k--;
	}
for(j=i;j<n;j++)
{

	printf("*");
	printf(" ");
}
printf("\n");
}

else
{
int k=i;
while(k!=n1)
{
	printf(" ");
	k++;
}

for(j=0;j<p;j++)
{
	printf("*");
	printf(" ");
}
printf("\n");
p++;
}//else

}//for


}

