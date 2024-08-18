#include<stdio.h>
#include<conio.h>
void alter(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int num1,num2;
//	clrscr();
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Before alter:\n");
	printf("First number: %d\n",num1);
	printf("Second number: %d\n",num2);
	
	alter(&num1,&num2);
	
	printf("After alter:\n");
	printf("First number: %d\n",num1);
	printf("Second number: %d",num2);
	return 0;
}
