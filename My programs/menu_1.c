#include<stdio.h>
#include<conio.h>

void showMenu(){
    printf("\nMenu:\n");
    printf("1. Print even-valued elements\n");
    printf("2. Print odd-valued elements\n");
    printf("3. Calculate and print sum and average\n");
    printf("4. Print maximum and minimum element\n");
    printf("5. Remove duplicates\n");
    printf("6. Print array in reverse order\n");
    printf("7. Re-enter array\n");
    printf("0. Quit\n");
    printf("Enter your choice: ");
}

void printElements(int p[], int size,int option){
    int i = 0;
    if(option != -1){
        int sum = 0, max, min;
        max = min = p[0];
        float avg = 0;
        for(i = 0; i < size; i++) {
            if(option == 1 && p[i]%2 == 0)
                printf("%d, ", p[i]);
            else if(option == 0  && p[i]%2 != 0)
                printf("%d, ", p[i]);
            else if(option == 2)
                sum += p[i];
            else if(option == 3){
                if(p[i] > max) max = p[i];
                if(p[i] < min) min = p[i];
            }
        }
        if(option == 2)
            printf("sum is: %d \navg is: %f \n  ",sum, sum / size);
        else if(option == 3)
            printf("max is: %d \nmin is: %d \n  ");
        
    }else if(option== -1){
        for(i = size-1; i >=0; i++)
            printf("%d, ", p[i]);
    } 
    printf("\b\b");
}

void removeDuplicates(int *p, int *size){
    int i=0, j=0, k=0, last = *size;
    for(i = 0; i < *size; i++){
        for(j = (*size)-1; j > i; j--){
            if(p[i] == p[j]){
                for(k = j; k < *size; k++){
                    p[k] = p[k+1];
                }
                p[last] = 0;
                size = (*size) - 1;
            }
        }
    }
}
void setValues(int *array,int size){
    int i;
    printf("Enter the elements:\n");
    for(i = 0; i<size; i++) 
        scanf("%d, ", &array[i]);
}

void main(){
    int choice = 0, size= 0,createSize = 0, i = 0;
    printf("enter the size of the array: ");
    scanf("%d", &createSize);
    size = createSize;
    int array[createSize];
    setValues(array,createSize);
    do {
        showMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:     // print even characters
            printElements(array, size, 1);
            break;
        case 2:     // print odd characters
            printElements(array, size, 0);
            break;
        case 3:     // print in reverse order    
            printElements(array, size, 2);
            break;
        case 4:     // print in reverse order    
            printElements(array, size, 3);
            break;
        case 5:     // duplicate remove    
            removeDuplicates(array,createSize);
            size=createSize;
            printf("Duplicates removed !");
            break;
        case 6:     // print in reverse order    
            printElements(array, size, -1);
            break;
        case 7:
            setValues(array,createSize);
            size = createSize;
            break;
        default:
            break;
        }
    } while(choice);
    // show menu
}