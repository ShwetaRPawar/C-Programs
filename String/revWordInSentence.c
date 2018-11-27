#include<stdio.h>
#include<string.h>
void rev(char str[])
{
	int i,j=0,k,p,temp;
	printf("%s",str);
	int len=strlen(str);
	//printf("\n%d",len);
	for(i=0;i<=len;i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			p=i-1;
			k=j;
			int mid=(i-j)/2;
			while(mid!=0)
			{
			temp=str[k];
			str[k]=str[p];
			str[p]=temp;
			p--;
			k++;
			mid--;
			}	
		j=i+1;
		}

	}
	printf("\n%s",str);
}

void main()
{

char str[]="shweta pawar shailesh";
//printf("%s",str);

rev(str);
}
