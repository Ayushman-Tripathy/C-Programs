//#include<stdio.h>
//#include<string.h>
//int main(int argc, char *argv[]){
//	char *i, *j;
//	i=argv[1];
//	int pos = 0, len=strlen(i);
//	char val[2][len];
//	while(*i != '\0'){
//		j = argv[1];
//		int skip = 0;
//		while(j < i){
//			if(*j == *i){
//				skip = 1;
//				break;
//			}
//			j += sizeof(char);
//		}		
//		if(skip == 1){
//			i += sizeof(char);
//			continue;
//		}
//		j = i;
//		int count = 0;
//		while(*j != '\0'){
//			if(*i == *j) count++;
//			j += sizeof(char);
//		}
//		val[0][pos]= *i;
//		val[1][pos]= count;	
//		pos++;
//		i += sizeof(char);
//	}	
//	int p = 0;
//	printf("+---------------+\n");
//	printf("| char  | count |\n");
//	printf("+---------------+\n");
//	for(p = 0; p < pos; p++){
//		printf("|   %c   |   %d   |\n", val[0][p], val[1][p]);
//	}
//	printf("+---------------+\n");
//}
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <text>\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    int len = strlen(input);

    int count[len] = {0};

    // Count occurrences of each character
    for (int i = 0; i < len; i++) {
        unsigned char currentChar = (unsigned char)input[i];
        count[currentChar]++;
    }

    // Print the result
    printf("+---------------+\n");
    printf("| char  | count |\n");
    printf("+---------------+\n");

    for (int i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > 0) {
            printf("|   %c   |   %d   |\n", (char)i, count[i]);
        }
    }

    printf("+---------------+\n");

    return 0;
}
