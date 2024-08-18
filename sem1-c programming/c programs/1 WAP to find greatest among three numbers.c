#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,l;
//	clrscr();
	printf("Enter any three whole numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	l = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("The largest number is: %d",l);
	getch();
	return 0;
}
