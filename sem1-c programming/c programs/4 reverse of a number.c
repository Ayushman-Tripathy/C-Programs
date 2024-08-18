#include<stdio.h>
#include<conio.h>
int main(){
	int num,digit,repeat;
//	clrscr();
	do{
		int rev=0;
		printf("Enter a number: ");
		scanf("%d",&num);
		while(num!=0){
			digit=num%10;
			rev=rev*10+digit;
			num/=10;
		}
		printf("The Reverse of the number is: %d",rev);
		printf("\nDo you want to continue ? y/n\n");
		repeat=getche();
	}while(repeat=='Y'||repeat=='y');
	return 0;
}
