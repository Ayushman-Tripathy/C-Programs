#include<stdio.h>
#include<conio.h>
int main(){
	int num,digit,repeat;
//	clrscr();
	do{
		int prod=1,sum=0;
		printf("Enter a whole number: ");
		scanf("%d",&num);
		while(num!=0){
			digit=num%10;
			sum+=digit;
			prod*=digit;
			num/=10;
		}
		printf("The Summation of digits= %d\n",sum);
		printf("The Product of digits= %d",prod);
		printf("\nDo you want to continue ? y/n\n");
		repeat=getche();
	}while(repeat=='Y'|| repeat=='y');
	return 0;
}
