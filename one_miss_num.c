#include<stdio.h>

int main()
{
	int op,i,n,a[]={2,3,8,7,4,6,9,5},ans=0,ans1=0;
	int len=(sizeof(a)/sizeof(a[0]));
	len+=1;
	printf("len=%d",len);
	int j=1;
	printf("\n");
	for(i=0;i<len;i++)
	{
		ans=ans^j;
		op=ans;
		//printf("1.%d\n",ans);
		ans=ans^a[i];
		//printf("2.%d\n",ans);
		j++;
	}
printf("\nmissing number:%d",op);

}
