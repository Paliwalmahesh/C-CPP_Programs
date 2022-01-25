#include<stdio.h>
#include<string.h>
void read(char *);
void display(char *);
int length(char *);
void compare(char * , int *);
void copy(char *,int *);
void rev(char *,int *);
void palindrome(char *);
void substring(char *);
int main()
{
	char a[100];
	int x;
	read(a);
	while(1)
	{
		printf("\n1.Substring Searching");
		printf("\n2.Check for Palindrome");
		printf("\n3.String Comparison");
		printf("\n4.Copy string");
		printf("\n5.Reverse String");
		printf("\n6.Quit");
		int choice;
		printf("Enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			display(a);
			break;
		case 2:
			palindrome(a);
			break;
		case 3 :
			compare(a,&x);
			break;
		case 4:
			copy(a,&x);
			break;
		case 5 :
			rev(a,&x);
			break;
		case 6 :
		
			break;
		default:
			printf("Invalid input");
	}
	}
}
void read(char b[])
{
	
	printf("enter array elements\n");
	gets(b);	
}
void display(char b[])
{
	printf("array elements are:\n");
	puts(b);
}
int length(char b[])
{
	int i=0,j=0;
	while(b[j]!='\0')
	{
		i++;
		j++;
	}
	
	return(i);
}
void compare(char b[],int *w)
{
	printf("\n");
	char c[100];
	int i=0,x;
	printf("\n\nenter elements of array c");
	gets(c);
	x=length(c);
	if(x==*w)
	{
		while(b[i]!='\0')
	{
		if(b[i]==c[i])
		{
			printf("\n\nstrings are same ");
			break;
		}
		
		i++;
	}
	}
	else
	{
		printf("\n\nstrings are not same ");
	}
	
}
void copy(char b[],int *w)
{
	printf("\n");
	char c[100];
	int i=0;
	while(i<*w)
	{
		c[i]=b[i];
		i++;
	}
	printf("\nstring c is:\n");
	printf("%s\n",c);
}
void rev(char b[],int *w)
{
	int i=0,j=0;
	char c[100];
	for(i=*w-1,j=0;i==0,j<*w;i--,j++)
	{
		c[j]=b[i];
	}
	puts(c);
}
void palindrome(char str[]) 
{ 
    int l = 0; 
	int h = strlen(str) - 1; 
	while (h > l) 
	{ 

        if (str[l++] != str[h--]) 

        { 
            printf("%s is Not Palindrome", str); 
            break;
        } 

    } 
	printf("%s is palindrome", str); 
}
void concatenate(char b[], int *w)
{
	printf("\n");
	char c[100];
	int i=0,y,x;
	printf("\n\nenter elements of array c");
	gets(c);
	x=length(c);
	printf("\n\nlength of c is %d",x);
	y=*w;
	while(i<x)
	{
		b[y]=c[i];
		y++;
	}
	printf("string after concatenation is:\n");
	printf("%s \n",b);
}
void substring(char *a)

{
	int pos, len,i=0;
	printf("\nEnter position and Length of required substring: In");
	scanf("%d%d",&pos,&len);
	char sub[100];
	while(i<len)
	{
		sub[i] = a[pos-1];
		i++;	
		pos++;
	}
	sub[len]="10";
	printf("\nRequired Substring is: %sin",substring);

}

