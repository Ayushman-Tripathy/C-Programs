#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,choose,repeat;
//	clrscr();
	do {
		printf("Enter the 1st number: ");
		scanf("%d",&a);
		printf("Enter the 2nd number: ");
		scanf("%d",&b);
		printf("Please choose any from the following:-\n");
		printf("for Addition press \'1\'\nfor Substraction press \'2\'\n");
		printf("for Multiplication press \'3\'\nfor Division press \'4\'\n");
		printf("for Modulous press \'5\'\n");	
		
		while (1) {
        	choose=getche();
        	if (choose>='1'&&choose<='5')
				break;
			else 
            	printf(" Please choose a valid option\n");
    	}

		switch (choose){
			case '1':
				printf(" Here is the result of Addition:\n");
				printf("%d + %d = %d",a,b,a+b);
				break;
			case '2':
				printf(" Here is the result of Substraction:\n");
				printf("%d - %d = %d",a,b,a-b);
				break;
			case '3':
				printf(" Here is the result of Multiplication:\n");
				printf("%d X %d = %d",a,b,a*b);
				break;
			case '4':
            	if(b!=0){
                	printf(" Here is the result of Division:\n");
                	printf("%d / %d = %f",a,b,(float)a/b);
            	}
				else
                	printf(" Error: Division by zero");
                break;
        	case '5':
            	if(b!=0){
                	printf(" Here is the result of Modulus:\n");
                	printf("%d %% %d = %d",a,b,a%b);
            	}
				else
                	printf(" Error: Modulus by zero");
            	break;
    	}
    	printf("\nDo you want to continue? y/n\n");
    	repeat=getche();
	}while(repeat=='Y'||repeat=='y');
	return 0;
}
