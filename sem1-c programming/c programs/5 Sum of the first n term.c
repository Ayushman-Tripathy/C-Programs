#include<stdio.h>
#include<conio.h>
main(){
	int i,num,rep;
	float value,sum=0;
	//clrscr();
	do{
		printf("Enter the range: ");
		scanf("%d", &num);
		for(i=1;i<=num;i++){
			value= 1.0/i;
			sum += value;
		}
		printf("The summation value is: %f",sum);
		printf("\nDo you want to Continue ? y/n\n");
		rep=getche();
    }while(rep=='y'||rep=='Y');
	return 0;
}
