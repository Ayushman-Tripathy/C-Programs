#include<stdio.h>
#include<string.h>
void stringAddress(char *str){
	for(;*str!='\0';str++)
		printf("%p, ", str);
	printf("\b\b \b\b\n");
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
int my_str_len(char *str1){
	int len=0;
	for(;*str1!='\0';str1++)
		len++;
	return len;
}
int countVowel(char *str){
	int num=0;
	char *ptr=str;
	for(;*ptr!='\0';ptr++)
		if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||
		*ptr=='i'||*ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
			num++;
	return num;
}
int main(){
	int choice;
	char string1[50],string2[20];
	printf("Enter the first string: ");
	gets(string1);
	printf("Enter the second string: ");
	gets(string2);
	do{
		printf("Menu:-\n");
		printf("1. Show address of each character in string.\n");
		printf("2. Concatenate two strings without using strcat function.\n");
		printf("3. Concatenate two strings using strcat function.\n");
		printf("4. Compare two strings.\n");
		printf("5. Calculate length of the string.\n");
		printf("6. Convert all lowercase characters to uppercase.\n");
		printf("7. Convert all uppercase characters to lowercase.\n");
		printf("8. Calculate number of vowels.\n");
		printf("9. Reverse the string.\n");
		printf("10. Exit.\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				stringAddress(string1);
				stringAddress(string2);
				break;
			case 2:
				printf("Concatinating string 1:\"%s\" with string 2:\"%s\".....\n",string1,string2);
				my_str_cat(string1,string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 3:
				printf("Concatinating string 1:\"%s\" with string 2:\"%s\".....\n",string1,string2);
				strcat(string1,string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 4:
				printf("Comparing \"%s\" with \"%s\".....\n",string1,string2);
				if(strcmp(string1,string2)==0)
					printf("String 1:\"%s\" and string 2:\"%s\" are equal\n",string1,string2);
				else if(strcmp(string1,string2)==1)
					printf("String 1:\"%s\" is not equal and greater than string 2:\"%s\"\n",string1,string2);
				else
					printf("String 1:\"%s\" is not equal and less than string 2:\"%s\"\n",string1,string2);
				break;
			case 5:
				printf("Length of \"%s\" is: %d\n",string1,my_str_len(string1));
				printf("Length of \"%s\" is: %d\n",string2,my_str_len(string2));
				break;
			case 6:
				printf("Converting all the lowercase of string1 and string2 to uppercase.....\n");
				strupr(string1);
				strupr(string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 7:
				printf("Converting all the uppercase of string1 and string2 to lowercase.....\n");
				strlwr(string1);
				strlwr(string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 8:
				printf("Vowels in string1 \"%s\": %d\n",string1,countVowel(string1));
				printf("Vowels in string2 \"%s\": %d\n",string2,countVowel(string2));
				break;
			case 9:
				printf("Reversing string1 and string2.....\n");
				strrev(string1);
				strrev(string2);
				printf("String 1: %s\nString 2: %s\n",string1,string2);
				break;
			case 10:
				printf("Exiting the program !");
				break;
			default:
				printf("Your input is invalid! Please try again!\n");
		}
	}while(choice!=10);
	return 0;
}
