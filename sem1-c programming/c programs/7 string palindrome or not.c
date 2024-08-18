#include <stdio.h>
#include <conio.h>
#include <string.h>
int palindromeornot(char str[]){
    int l=0,r=strlen(str)-1;
//  clrscr();
    while(l<r){
        if(str[l]!=str[r])
			return 0;
        l++;
        r--;
    }
    return 1;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);
    if(palindromeornot(str))
        printf("The given string is a palindrome.\n");
	else
        printf("The given string is not a palindrome.");
	getch();
	return 0;
}
