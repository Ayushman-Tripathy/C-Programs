#include <stdio.h>
int main(){
    int sizeA, sizeB, i, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d",&sizeA);
    int arr1[sizeA];
    printf("Enter the elements of the first array in ascending order:\n");
    for(i=0;i<sizeA;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of the second array: ");
    scanf("%d",&sizeB);
    int arr2[sizeB];
    printf("Enter the elements of the second array in ascending order:\n");
    for(j=0;j<sizeB;j++)
        scanf("%d",&arr2[j]);
    int arr3[sizeA+sizeB];
    i=j=k=0;
    while(i<sizeA||j<sizeB){
        if(arr1[i]<=arr2[j]&&i<sizeA)
            arr3[k++]=arr1[i++];
        else if(j<sizeB)
            arr3[k++]=arr2[j++];
    }
    printf("Array 1:-\n");
    for(i=0;i<sizeA;i++)
        printf("%d, ",arr1[i]);
    printf("\b\b \b\b");
	printf("\nArray 2:-\n");
    for(j=0;j<sizeB;j++)
        printf("%d, ",arr2[j]);
    printf("\b\b \b\b");
	printf("\nMerged Array:-\n");
    for(k=0;k<sizeA+sizeB;k++)
        printf("%d, ",arr3[k]);
    printf("\b\b \b\b");
    return 0;
}
