#include <stdio.h>
void substring(char s1[], char s2[]) {
	int c1 = 0, c2 = 0, i, j, flag;
    while (s1[c1] != '\0')
        c1++;
    while (s2[c2] != '\0')
        c2++;
    for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            flag = 1;
            if (s1[j] != s2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("%s is substring of %s",s2,s1);
    else
        printf("%s is substringing of %s",s2,s1);

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
 
void reverse(char s[]) 
{  int c,b,E;
   char r[100];
	while (s[c] != '\0')
      c++;

   E = c - 1;

   for (b = 0; b < c; b++) {
      r[b] = s[E];
      E--;
   }

   r[b] = '\0';

   printf("%s\n", r);
}

int main()
{
			char s1[50],s2[50];
			int finalstr, choice;
			printf("\nEnter string:");
			scanf("%s",&s1);
			
		 menu:{	
			printf("1. Substring\n2.Palindrome\n3.Compare\n4.Copy\n5.Reverse");
			printf("\n\nEnter Your Choice:");
			scanf("%d", &choice);
			switch (choice) 
			{
			case 1:
				
					printf("\nEnter 2nd string:");
					scanf("%s",&s2);
					substring(s1, s2);
					break;
			case 2:
					
					finalstr = palindrome(s1);
						if (finalstr == 0)
						    printf("\nNot a palindrome");
						else
							printf("\nIs a palindrome");
						break;
			case 3:
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
					copy(s2, s1);
					printf("\nString=%s", s2);
					break;
			case 5:
					reverse(s1);
					printf("\nString=%s", s1);
					break;
			default:
			printf("\nInvalid Choice:");
			break;
			
			}
		}
printf("\nfor continue press 1");
int r;
scanf("%d",&r);
if(r==1){
goto menu;
}
return 0;
}
