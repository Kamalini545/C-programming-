#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="car";
	char str2[100]="arc";
	char ch,temp;
	int i,j,len1,len2;
	{
		printf("given string are not anagram");
		return 0;
	}
	for(i=0;i<len1-1;i++)
	{
		for(j=i+1;j<len1;j++)
		{
			if(str1[i]>str1[j])
			{
				temp=str1[i];
				str1[i]=str2[j];
				str1[j]=str2[j];
				
				
			}
			if(str2[i]>str2[j])
			{
				temp=str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
				
			}
		}
	}
	for(i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
		{
		
		printf("string are not anagram n");
		return 0;
		
}
}



printf("strings are anagram");
}