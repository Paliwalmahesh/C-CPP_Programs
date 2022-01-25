#include <stdio.h>
void substr(char s1[], char s2[]);
int palindrome(char str[]);
int compare(char s1[], char s2[]);
void copy(char s1[], char s2[]);
void reverse(char str[]);
int main()
{
			char s1[50],s2[50];
			int finalstr, choice;
			while (choice != 6)
			{
			printf("\n1.Finding Substring");
			printf("\n2.Is Palindrome or not");
			printf("\n3.Compare");
			printf("\n4.Copy ");
			printf("\n5.Reverse ");
			printf("\n6.Exit");
			printf("\n\nEnter Your Choice:");
			scanf("%d", &choice);
			switch (choice) 
			{
			case 1:
					printf("\nEnter 1st string:");
					scanf("%s",&s1);
					printf("\nEnter 2nd string:");
					scanf("%s",&s2);
					substr(s1, s2);
					break;
			case 2:
					printf("\n Enter a String:");
					scanf("%s",&s1);
					finalstr = palindrome(s1);
						if (finalstr == 0)
						    printf("\nNot a palindrome");
						else
							printf("\nIs a palindrome");
						break;
			case 3:
					printf("\nEnter 1st string:");
					scanf("%s",&s1);
					printf("\nEnter 2nd string:");
					scanf("%s",&s2);
					finalstr = compare(s1, s2);
					if (finalstr == 0)
					  printf("\nSame Strings.");
					else if (finalstr > 0)
				     	printf("\nString1>string2");
					else
						printf("\nString1<string2");
					break;
			case 4:
					printf("\nEnter a String:");
					scanf("%s",&s1);
					copy(s2, s1);
					printf("\nString=%s", s2);
					break;
			case 5:
					printf("\nEnter a String:");scanf("%s",&s1);
					reverse(s1);
					printf("\nString=%s", s1);
					break;
			default:
			printf("\nInvalid Choice:");
			break;
			
			}
			
			};
return 0;
}
 
void substr(char s1[], char s2[]) {
		int i, j, lengtha, lengthb;
		for (lengtha = 0; s1[lengtha] != '\0'; lengtha++);
		for (lengthb = 0; s2[lengthb] != '\0'; lengthb++);
		for (i = 0; i <= lengtha - lengthb + 1; i++) {
		for (j = 0; s1[i + j] == s2[j] && s2[j] != '\0'; j++);
		if (s2[j] == '\0')
		printf("\nString found at position : %d", i + 1);
}
}
 
int palindrome(char str[])
{
		int i, j;
		i = j = 0;
		while (str[j] != '\0')
		j++;
		while (i < j) {
		if (str[i] != str[j - 1])
		return (0);
		i++;
		j--;
		}
		return (1);
}
 
int compare(char s1[], char s2[]) 
{
	int i;
	i = 0;
	while (s1[i] != '\0')
	{
	if (s1[i] > s2[i])
	return (1);
	if (s1[i] < s2[i])
	return (-1);
	i++;
	}
	return (0);
}
 
void copy(char s2[], char s1[]) 
{
	int i = 0;
	while (s1[i] != '\0') 
	{
	s2[i] = s1[i];
	i++;
	}
	s2[i] = '\0';
}
 
void reverse(char str[]) 
{
		int i, j;
		char temp;
		i = j = 0;
		while (str[j] != '\0')
		j++;
		j--;
		while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
		}
}
