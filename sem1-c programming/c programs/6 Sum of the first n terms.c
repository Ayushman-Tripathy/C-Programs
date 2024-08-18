#include<stdio.h>
#include<conio.h>
int main(){
	int num,sum=0,rep;
//	clrscr();
	do{
		printf("Enter the range: ");
		scanf("%d",&num);
		if(num%2==0)
			sum=num/(-2);
		else
			sum=(num/2)+1;
		printf("The summation of n terms is: %d", sum);
		printf("\nDo you want to continue ? y/n\n");
		rep=getche();
	}while(rep=='Y'||rep=='y');
	return 0;
}

//int main(){
//    int num,sum=0,i,j,rep;
////	clrscr();
//    do{
//    	printf("Enter a number: ");
//    	scanf("%d",&num);
//    	for (i=1,j=2;i<=num;i+=2,j+=2){
//        	if (j>num)
//            	j=0;
//    		sum+=i-j;
//    	}
//    	printf("The summation of n terms is: %d", sum);
//    	printf("\nDo you want to continue ? y/n\n");
//		rep=getche();
//	}while(rep=='Y'||rep=='y');
//    return 0;
//}	
