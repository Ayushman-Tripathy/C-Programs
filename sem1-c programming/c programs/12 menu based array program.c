#include<stdio.h>
#include<conio.h>
void printEvenOddElements(int arr[],int size,int isEven){
    int i;
	printf("%s-valued elements: ",isEven?"Even":"Odd");
    for (i=0;i<size;i++)
        if((arr[i]%2==0)==isEven)
            printf("%d ",arr[i]);
    printf("\n");
}
void calculateSumAndAverage(int arr[],int size){
    int sum=0,i;
    for(i=0;i<size;i++)
        sum+=arr[i];
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",(float)sum/size);
}
void findMinMax(int arr[],int size){
    int max=arr[0],min=arr[0],i;
    for(i=1;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
}
void removeDuplicates(int arr[], int *size) {
    int i,j,k;
	for(i=0;i<*size;i++){
        for(j=i+1;j<*size;){
            if(arr[i]==arr[j]){
                for(k=j;k<*size-1;k++)
                    arr[k]=arr[k+1];
                (*size)--;
            }else
            	j++;
        }
    }
}
void printReverseOrder(int arr[],int size){
    int i;
	printf("Array in reverse order: ");
    for(i=size-1;i>=0;i--)
        printf("%d ",arr[i]);
    printf("\n");
}
int main(){
    int size,createSize,i,choice;
//    clrscr();
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    createSize=size;
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    do{
        printf("Menu:\n1. Print even-valued elements\n");
		printf("2. Print odd-valued elements\n");
		printf("3. Calculate and print sum and average\n");
		printf("4. Print maximum and minimum element\n5. Remove duplicates\n");
		printf("6. Print array in reverse order\n7. Re-enter array\n");
		printf("8. Quit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            case 2:
                printEvenOddElements(arr,size,choice==1);
                break;
            case 3:
                calculateSumAndAverage(arr,size);
                break;
            case 4:
                findMinMax(arr,size);
                break;
            case 5:
                removeDuplicates(arr,&size);
                printf("Duplicates removed.\n");
                break;
            case 6:
                printReverseOrder(arr,size);
                break;
            case 7:
                printf("Enter the elements of the array:\n");
                for(i=0;i<createSize;i++){
                    printf("Element %d: ",i+1);
                    scanf("%d",&arr[i]);
                }
                size=createSize;
                break;
            case 8:
                printf("Exiting program!");
                break;
            default:
                printf("Invalid choice.Enter a valid option.\n");
        }
    }while(choice!=8);
    return 0;
}
