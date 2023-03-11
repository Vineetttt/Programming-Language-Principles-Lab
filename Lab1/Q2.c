#include<stdio.h>

void sortUsingPointer(int n, int *ptr){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+j) < *(ptr+i)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
}
void printArray(int n, int a[]){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int n ;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting: \n");
    printArray(n,a);
    sortUsingPointer(n,a);
    printf("After sorting: \n");
    printArray(n,a);
    return 0;
}