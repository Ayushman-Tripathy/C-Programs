#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,*ptr1,*ptr2,temp;
//	getch();
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	printf("Before swap:\n");
	printf("First number: %d and ",num1);
	printf("second number: %d\n",num2);
	
	ptr1 = &num1;
    ptr2 = &num2;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
	
	printf("After swap:\n");
	printf("First number: %d and ",num1);
	printf("second number: %d",num2);
	return 0;
}
