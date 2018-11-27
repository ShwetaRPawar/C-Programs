#include<stdio.h>
int main()
{
	int num,num1,rem,op,output,sum,sum1;
	int count=0;
	for(num=1; ;num++)
	{
		if(count==5)
		{
			return 0;
		}
		else
		{
			num1=num;
			sum=0;
			sum1=0;
			while(num1!=0)
			{
				rem=num1%10;
				sum=sum+rem;
				num1=num1/10;
			}
			op=sum;
			while(op!=0)
			{
				rem=op%10;
				sum1=(sum1*10)+rem;
				op=op/10;
			}
			output=sum*sum1;
			if(output==num)
			{
				printf("%d\n",num);
				count++;
			}
		}
			
	}

}
