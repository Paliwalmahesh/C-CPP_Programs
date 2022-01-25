#include<stdio.h>
int length(char arr[])
{
	int i;
	for(i=0;arr[i] != '\0';i++)
	{}
	return i;
}
void substring(char a[],char b[]);
int pallindrome(char a[]);
int compare(char a[],char b[]);
void copy(char a[],char b[]);
void reverse(char a[],char b[]);
void main()
{
	char arr1[50],arr2[50];
	int n,result;
	printf("Enter 1 for substring \n2 for pallindrome \n3 for comparing \n4 for copying \n5 for reverse \n6 for continuing :");
	scanf("%d",&n);
	do
	{
		switch(n)
		{
			case 1:printf("\nEnter 1st string ");
				scanf("%s",&arr1);
				printf("\nEnter 2nd string ");
				scanf("%s",&arr2);
				substring(arr1,arr2);
				break;
			case 2:printf("\nEnter a string :");
				scanf("%s",&arr1);
				result=pallindrome(arr1);
				if(result == 0)
				{
					printf("\nNot a Pallindrome : ");
				}
				else
				{
					printf("\nIt is a Palllindrome : ");
				}
				break;
			case 3:printf("\nEnter 1st string : ");
				scanf("%s",&arr1);
				printf("\nEnter 2nd string : ");
				scanf("%s",&arr2);
				result=compare(arr1,arr2);
				if(result > 0)
				{
					printf("\n1st string is greater than 2nd :");
				}
				else if(result < 0)
				{
					printf("\n2nd string is greater than 1st :");
				}
				else
				{
					printf("\nBoth strings are equal : ");
				}
				break;
			case 4:printf("\nEnter a string : ");
				scanf("%s",&arr1);
				copy(arr1,arr2);
				printf("\ncopied successfully : ");
				printf("\nCOPIED STRING IS : %s",&arr2);
				break;
			case 5:printf("\nEnter a string to be reversed : ");
				scanf("%s",&arr1);
				reverse(arr1,arr2);
				printf("\nREVERSE STRING IS : %s",&arr2);
				break;
			default:printf("\nInvalid input : ");
		}
		printf("\nenter 1 for substring \n2 for pallindrome \n3 for comparing \n4 for copying \n5 for reverse \n6 for stopping :");
		scanf("%d",&n);
	}while(n!=6);
}
void substring(char a[],char b[])
{
	int len1,len2,i,j;
	len1=length(a);
	len2=length(b);
	for (i=0;i<=len1-len2+1;i++) 
	{
		for(j = 0;a[i+j]==b[j] && b[j] != '\0';j++);
		if (b[j] == '\0')
		printf("\nString found at location : %d", i + 1);
	}
}
int pallindrome(char a[])
{
	char b[50];
	int i;
	reverse(a,b);
	i=compare(a,b);
	if(i == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int compare(char a[],char b[])
{
	int i=0;
	if(length(a) == length(b))
	{
		for(;i<length(a);i++)
		{
			if(a[i]>b[i])
			{
				return 1;
			}
			if(a[i]<b[i])
			{
				return -1;
			}
		}
		return 0;
	}
}
void copy(char a[],char b[])
{
	int i,len;
	len=length(a);
	for(i=0;i<len;i++)
	{
		b[i]=a[i];
	}
	b[len]='\0';
}
void reverse(char a[],char b[])
{
	
	int i,j;
	i=length(a);
	for(j=0;j<i;j++)
	{
		b[j]=a[i-j-1];
	}
	b[i]='\0';
}
