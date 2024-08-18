#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d\n", myNumbers[0]);
  
  char greetings[] = "Hello World!";
  printf("%c\n", greetings[0]);
  
  char name[20];
  printf("Enter your full name: ");
//  It will not work as scanf terminates if any white spaces comes to the string
//  scanf("%s",&name);
  fgets(name,sizeof(name),stdin);
  printf("Good Evening M. %s",name);
  
  return 0;
}
