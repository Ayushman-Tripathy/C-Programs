#include <stdio.h>
#include <conio.h>
#include <string.h>
int a;
int strpalindrome(char str[]){
    char check[50];
    strcpy(check,str);
    strrev(check);  
    
    if (strcmp(str,check)==0)
        a=1;
	else
        a=0;
    return a;
}
int main(){
    char str[50];   
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    strpalindrome(str);
    printf("1 FOR PALINDROME AND 0 FOR NOT PALINDROME: %d\n", a);
    getch();
    return 0;
}
