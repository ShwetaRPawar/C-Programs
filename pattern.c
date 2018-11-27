#include<stdio.h>
void main()
{
int i,j,k=1;
for(i=1;i<=3;i++)
{
k=1;
while(k<i)
{
printf(" ");
k++;
}
for(j=i;j<=3;j++)
{
printf("*");
}
printf("\n");
}
}
