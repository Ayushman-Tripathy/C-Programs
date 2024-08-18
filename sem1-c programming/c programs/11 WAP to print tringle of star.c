//WAP to print tringle of star, lines provided by user.
#include<stdio.h>
#include<conio.h>
int main(){
	int num,i,j;
//	clrscr();
	printf("Enter the number of lines: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=1;j<=2*i+1;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
