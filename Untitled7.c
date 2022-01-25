#include <stdio.h>
#include <string.h>
int main()
{
   char s[1000], r[1000];
   int b, E, count = 0;

   printf("Input a string\n");
   gets(s);

   

   while (s[count] != '\0')
      count++;

   E = count - 1;

   for (b = 0; b < count; b++) {
      r[b] = s[E];
      E--;
   }

   r[b] = '\0';

   printf("%s\n", r);

   return 0;
}

