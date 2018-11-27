#include<stdio.h>
int main()
{
int n=0,i=0,c=0;
printf("\nEnter the num:");
scanf("%d",&n);

for(i=1;;i++)
{
		if(i%2==0)
		{
			printf("%d\t",i);
			c++;
		}
		if(c==n)
		{
			break;
		}
}

return 0;
}
/***************************** OUTPUT***********************
Enter the num:7
2	4	6	8	10	12	14*/	
