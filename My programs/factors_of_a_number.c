// WAP to compute the factors of a given number
#include <stdio.h>
#include <conio.h>
int main(){
    int num, temp, i;
    // clrscr();
    printf("Enter a number: ");
    scanf("%d", &temp);
    if (temp <= 0){
        printf("not a valid whole number!\n");
        return 0;
    }
    num	= temp;
    printf("The Factors of %d are: ", num);
    for (i = 1; i <= num; i++)
        if (num % i == 0)
            printf("%i, ", i);
    printf("\b\b \b\b");
    return 0;
}