#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	char repeat;
	do
	{
		printf("Enter a number: ");
		scanf("%d",&num);
		for(i=1;i<=10;i++)
			printf("%d X %d = %d\n",num,i,num*i);
		printf("Do you want to continue ? y/n: ");
		repeat = getche();
		printf("\n");
//		fgets(repeat, sizeof(repeat), stdin);
//		not working
	}while(repeat=='Y'||repeat=='y');
	getch();
	return 0;
}


