#include<stdio.h>
int main(){
    FILE *source, *destination;
    char source_name[30],destination_name[30],ch;
    
    printf("Enter the source file name: ");
    scanf("%s", source_name);
    source=fopen(source_name, "r");
    if(source==NULL){
        printf("Unable to open source file.\n");
        return 1;
    }
    
    printf("Enter the destination file name: ");
    scanf("%s",destination_name);
    destination=fopen(destination_name, "w");
    if (destination== NULL){
        printf("Unable to open destination file.\n");
        return 1;
    }
    while((ch = fgetc(source)) != EOF)
        fputc(ch,destination);
    fcloseall;
    printf("File content copied successfully.\n");
    return 0;
}
