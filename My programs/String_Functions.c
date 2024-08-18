#include <stdio.h>
#include <string.h>

int main() 
{
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "Hi";
  char str4[20];
  
  // Display the length of the string
  printf("%d\n", strlen(alphabet));
  
  //Display the size of the string including \0 (NOT THE ACTUAL STRING LENGTH)
  printf("%d\n", sizeof(alphabet));
  
  
  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);
  
  // Copy str1 to str4
strcpy(str4, str1);
printf("\n%s", str4);
  
  return 0;
}
