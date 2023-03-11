#include<stdio.h>

int main()
{
    int num,sum=0,count=0;
    float avg = 0;
    while(1){
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num<0) break;
        sum+=num;
        count+=1;
    }
    printf("Sum of entered numbers = %d",sum);
    avg = sum/count;
    printf("\nAverage of enetered numbers = %f",avg);
    return 0;
}