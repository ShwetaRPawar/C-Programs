#include<stdio.h>
#include<string.h>

void check(char s1[],char s2[])
{
	int count=0;
	//printf("\n%s",s1);
	int len1=strlen(s1);
	int len2=strlen(s2);
	//printf("\n%d",len2);
	int i=0,j=0;
	while(i<len1)
	{
		if(s1[i]==s2[j])
		{
			int k=i;
			k++;
			j++;
			while(j<len2)
			{
				if(s1[k]==s2[j])
				{
	
					k++;
					j++;
				}
				else
				{
					count--;
					break;
				}
				
			}
			count++;
			j=0;
		}
		i++;
	}
	printf("\ncount=%d",count);

}

void main()
{

	//char s1[]="abcsaghkjhsmhhgghfghsam";
	char s1[]="abcdcdcdc";
	
	//char s2[]="sam";
	char s2[]="cdc";
	printf("%s\n",s1);
	printf("%s",s2);

	check(s1,s2);
}
