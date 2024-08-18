//Write a program to create user defined string function
//(strlen, strcmp, strcpy, strncpy, strcat, strstr) and make a menu driven
//program for the functions and add re-enter string and exit in the menu option.
#include<stdio.h>
int my_str_len(char *str1){
	int len=0;
	for(;*str1!='\0';str1++)
		len++;
	return len;
}
int my_str_cmp(char *str1,char *str2){
	for(;*str1==*str2;str1++,str2++)
		if(*str1=='\0')
			return 0;
	if(*str1>*str2)
		return 1;
	else
		return -1;
}
char *my_str_cpy(char *str1,char *str2){
	char *org_str1 = str1;
	for(;*str2!='\0';str1++,str2++)
		*str1=*str2;
	*str1='\0';
	return org_str1;
}
char *my_str_ncpy(char *str1,char *str2,int n){
    char *org_str1=str1;
    for(;n>0&&*str2!='\0';str1++,str2++,n--)
        *str1=*str2;
    if(n>0)
        *str1='\0';
    return org_str1;
}
char *my_str_cat(char *str1,char *str2){
	char *org_str1=str1;
	while(*str1!='\0')
		str1++;
	for(;*str2!='\0';*str1++,*str2++)
		*str1=*str2;
	*str1='\0';
	return org_str1;
} 
char *my_str_str(char *str1,char *str2){
	while(*str1!='\0'){
        char *st1=str1;
        char *st2=str2;
        while(*st2!='\0'&&*st1==*st2){
            st1++;
            st2++;
        }             
        if(*st2=='\0')
        	return str1;
        str1++;
    }
    return NULL;
}
void user_input(char *s1,char *s2){
	fflush(stdin);
	printf("Enter the first string: ");
	gets(s1);
	printf("Enter the second string: ");
	gets(s2);
}
void menu(){
		printf("Menu:-\n");
		printf("1. Print the length of string1 and string2.\n");
		printf("2. Compare string1 with string2.\n");
		printf("3. Copy string2 to string1.\n");
		printf("4. Copy number of characters of string2 to string1.\n");
		printf("5. Concatenate string1 and string2.\n");
		printf("6. Find string within string1.\n");
		printf("7. Re-enter strings to the array.\n");
		printf("8. Quit.\n");
}
int main(){
	char string1[50],string2[20],checkstr[20];
	int choice,n=0;
	user_input(string1,string2);
	do{
		menu();
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Length of \"%s\" is: %d\n",string1,my_str_len(string1));
				printf("Length of \"%s\" is: %d\n",string2,my_str_len(string2));
				break;
			case 2:				
				printf("Comparing \"%s\" with \"%s\".....\n",string1,string2);
				if(my_str_cmp(string1,string2)==0)
					printf("String 1:\"%s\" and string 2:\"%s\" are equal\n",string1,string2);
				else if(my_str_cmp(string1,string2)==1)
					printf("String 1:\"%s\" is not equal and greater than string 2:\"%s\"\n",string1,string2);
				else
					printf("String 1:\"%s\" is not equal and less than string 2:\"%s\"\n",string1,string2);					
				break;
			case 3:
				printf("Coping string 2:\"%s\" to string 1.....\n",string2);
				my_str_cpy(string1,string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 4:
				printf("Enter the n characters: ");
				scanf("%d",&n);
				printf("Coping first %d characters from string 2:\"%s\" to string 1:\"%s\".....\n",n,string2,string1);
				my_str_ncpy(string1,string2,n);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 5:
				printf("Concatinating string 1:\"%s\" with string 2:\"%s\".....\n",string1,string2);
				my_str_cat(string1,string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 6:
				printf("Enter a string that you want to find within string 1:\"%s\": ",string1);
				fflush(stdin);
				gets(checkstr);
				printf("Finding \"%s\" within string 1:\"%s\".....\n",checkstr,string1);
				printf("%s\n",my_str_str(string1,checkstr));
				break;
			case 7:
				user_input(string1,string2);
				break;
			case 8:
				printf("Exiting the program !");
				break;
			default:
				printf("Your input is invalid! Please try again!\n");
		}
	}while(choice!=8);
	printf("\n\t\t\t\t\tThank You _/\\_");
	getch();
	return 0;
}
