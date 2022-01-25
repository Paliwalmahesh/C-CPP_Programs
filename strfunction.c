#include <stdio.h>
#include <string.h>
int main()
{
  char name[ ]= "Hello";
  char s2[10];  
  int len1, len2;
  len1 = strlen(name); 
  strcpy(name,s2);
  printf("length of %s = %d\n", name, len1); 
  printf("new string %s ", s2);
  return 0;
}
