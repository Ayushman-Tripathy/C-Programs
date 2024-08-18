#include<stdio.h>
#include<conio.h>
int isprime(int num){
    int i;
    for(i=2;i<=num/2;i++)
        if(num%i==0)
            return 0;
    return 1;
}
int main(){
    int num,i;
//  clrscr();
    printf("Enter a number: ");
    scanf("%i", &num);
    if(num==1||num==0)
        printf("It is a special number !");
    else if(num<0)
    	printf("Invalid input.");
    else if(isprime(num))
		printf("It is a prime number.");
	else
        printf("It is not a prime number.");
	printf("\nThe prime numbers less than 100 are:");
    for(i=2;i<100;i++)
    	if(isprime(i))
    		printf("%d, ",i);
    	printf("\b\b \b\b");
    getch();
    return 0;
}
