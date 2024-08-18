/*Calculate total expenses*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int qty,dis=0;
	float rate,total;	
	printf("Enter quantity and rate: ");
	scanf("%d%f",&qty,&rate);
	
	if (qty>=1500)
		dis=15;
	else if (qty>=1000)
		dis=10;
	total= (qty*rate)-(qty*rate*dis/100);
	printf("Your total expenses = RS %.2f",total);
	getch();
	return 0;
}

