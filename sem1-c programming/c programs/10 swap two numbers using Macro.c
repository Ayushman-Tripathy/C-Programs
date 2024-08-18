#include<stdio.h>
#include<conio.h>
#define swap(a,b) c=a;a=b;b=c;
int main(){
	int a,b,c;
//	clrscr();
	printf("Enter a number for A: ");
	scanf("%d",&a);
	printf("Enter a number for B: ");
	scanf("%d",&b);
	printf("The numbers before swap: A= %d and B= %d\n",a,b);
	swap(a,b);
	printf("The numbers after swap:  A= %d and B= %d",a,b);
	getch();
	return 0;
}
