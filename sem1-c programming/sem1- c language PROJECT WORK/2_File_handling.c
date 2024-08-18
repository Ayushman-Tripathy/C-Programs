/*Write a menu driven C program in which student details 
are maintained and file handling functions like- insert, 
display, search, update and delete on records can be done */

#include<stdio.h>
#include<string.h>
struct student{
	int role;
	char name[20];
	char sec[5];
	int mark;
	float percentage;
}std;

void insert_record(){
	FILE *fptr;
	fptr=fopen("Student_Data_Base.bin","ab");
	if(fptr==NULL){
		printf("ERROR: File can\'t open!\n");
		return;
	}
	printf("\n***Enter new student details***\n");
	printf("\nEnter student roll no.: ");
	scanf("%d",&std.role);
	fflush(stdin);
	printf("Enter student name: ");
	gets(std.name);
	printf("Enter student's section: ");
	gets(std.sec);
	
	printf("Enter student mark: ");
	scanf("%d",&std.mark);
	printf("Enter student percentage: ");
	scanf("%f",&std.percentage);
	fwrite(&std,sizeof(std),1,fptr);
	printf("Student Data written successfully!\n");
	fclose(fptr);
}

void display_record(){
	FILE *fptr;
	fptr=fopen("Student_Data_Base.bin","rb");
	if(fptr==NULL){
		printf("ERROR: File can\'t open!\n");
		return;
	}
	printf("\n***Student details are given below***\n\n");
		printf("Roll no.\t  Name\t\tSection\t   Mark\t  Percentage\n");
	while(fread(&std,sizeof(std),1,fptr)==1)
		printf("  %d\t    %s\t   %s\t   %d\t    %.2f\n",std.role,std.name,std.sec,std.mark,std.percentage);
	fclose(fptr);
}

void search_record(){
	int rolln,flag=0,ch;
	FILE *fptr;
	fptr=fopen("Student_Data_Base.bin","rb");
	if(fptr==NULL){
		printf("ERROR: File can\'t open!\n");
		return;
	}
	printf("Enter student roll number to whome you want to search: ");
	scanf("%d",&rolln);
	while(fread(&std,sizeof(std),1,fptr)!=0 && flag==0)
		if(std.role==rolln){
			printf("Search operation successful and a record found!\n");
			printf("Roll no.\t  Name\t\tSection\t   Mark\t  Percentage\n");
			printf("  %d\t    %s\t   %s\t   %d\t    %.2f\n",std.role,std.name,std.sec,std.mark,std.percentage);			
			printf("Do you want to search further? (y/n) ");
			getchar();
			scanf("%c",&ch);
			if(ch=='Y' || ch=='y')
				continue;
			flag=1;
		}
	if(flag==0)
		printf("No student record found!\n");
	fclose(fptr);
}

void update_record(){
	int roll,flag=0,ch,ask;
	FILE *fptr;
	fptr=fopen("Student_Data_Base.bin","rb+");
	if(fptr==NULL){
		printf("ERROR: File can\'t open!\n");
		return;
	}
	printf("Enter student roll number to whome you want to update: ");
	scanf("%d",&roll);
	while(fread(&std,sizeof(std),1,fptr)>0 && flag==0)
	if(std.role==roll){
		printf("Search operation successful and a record found!\n");
		printf("Roll no.\t  Name\t\tSection\t   Mark\t  Percentage\n");
		printf("  %d\t    %s\t   %s\t   %d\t    %.2f\n",std.role,std.name,std.sec,std.mark,std.percentage);			
		fflush(stdin);
		printf("Do you want to update the above record ?y/n ");
		scanf("%c",&ask);
		if(ask=='n'||ask=='N')
			continue;
		flag=1;
	}
	if(ask=='y' || ask=='Y'){
		printf("1.To update roll no.\n");
		printf("2.To update name.\n");
		printf("3.To update section.\n");
		printf("4.To update  mark.\n");
		printf("5.To update percentage.\n");
		printf("6.To update the whole record.\n");
		printf("Enter your option: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter student roll no.: ");
				scanf("%d",&std.role);
				break;
			case 2:
				fflush(stdin);
				printf("Enter student name: ");
				gets(std.name);
				break;
			case 3:
				fflush(stdin);
				printf("Enter student's section: ");
				gets(std.sec);
				break;
			case 4:
				printf("Enter student mark: ");
				scanf("%d",&std.mark);
				break;
			case 5:
				printf("Enter student percentage: ");
				scanf("%f",&std.percentage);
				break;
			case 6:
				printf("\nEnter student roll no.: ");
				scanf("%d",&std.role);
				fflush(stdin);
				printf("Enter student name: ");
				gets(std.name);
				printf("Enter student's section: ");
				gets(std.sec);
				printf("Enter student mark: ");
				scanf("%d",&std.mark);
				printf("Enter student percentage: ");
				scanf("%f",&std.percentage);
				break;
			default:
				printf("Invalid option! No data changed\n");
		}
		fseek(fptr,-((long)sizeof(std)),SEEK_CUR);
		fwrite(&std,sizeof(std),1,fptr);
	}
	fclose(fptr);
}

void delete_record(){
	int roll,flag=0,ask;
	FILE *fptr,*ptr;
	fptr=fopen("Student_Data_Base.bin","rb");
	ptr=fopen("temp.bin","ab");
	if(fptr==NULL || ptr==NULL){
		printf("ERROR: File can\'t open!\n");
		return;
	}
	printf("Enter student roll number to whome you want to delete: ");
	scanf("%d",&roll);
	while(fread(&std,sizeof(std),1,fptr)==1){
		if(std.role==roll){
			printf("Search operation successful and a record found!\n");
			printf("Roll no.\t  Name\t\tSection\t   Mark\t  Percentage\n");
			printf("  %d\t    %s\t   %s\t   %d\t    %.2f\n",std.role,std.name,std.sec,std.mark,std.percentage);
			printf("Do you want to delete the above record ?y/n ");
			fflush(stdin);
			scanf("%c",&ask);
			if(ask=='n'||ask=='N'){
				fwrite(&std,sizeof(std),1,ptr);
				continue;
			}
			printf("Record deleted!\n");
			flag=1;
		}
		else
			fwrite(&std,sizeof(std),1,ptr);
	}
	fclose(fptr);
	fclose(ptr);
	if(flag==0)
		printf("No record Found!\n");
	remove("Student_Data_Base.bin");
	rename("temp.bin","Student_Data_Base.bin");
	remove("temp.bin");
}	

void main(){
	char choice;
	printf("+--------------------------------------------------------+");
	printf("\n|              Welcome To Student Data Base              |\n");
	printf("+--------------------------------------------------------+");
	do{
		printf("\n\t\t\t  :MENU:\n");
		printf("1. Insert student record to data base.\n");
		printf("2. Display student record from data base.\n");
		printf("3. Search student record from data base.\n");
		printf("4. Update a student record within the data base.\n");
		printf("5. Delete a student record from data base.\n");
		printf("6. Exit from data base.\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert_record();
				break;
			case 2:
				display_record();
				break;
			case 3:
				search_record();
				break;
			case 4:
				update_record();
				break;
			case 5:
				delete_record();
				break;
			case 6:
				printf("Exiting the Program.");
				break;
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}while(choice!=6);
	printf("\n\t\t\t\t\tThank You _/\\_");
	getch();
}
