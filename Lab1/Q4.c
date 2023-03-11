#include <stdio.h>

int main() {
    float num1,num2;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    int choice;
    printf("Enter: \n");
    printf("1.To perform addition\n2.To perform Subtraction\n3.To perform Multiplication\n4.To perform Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
   
    switch(choice){
        case 1:
            printf("%f + %f = %f",num1,num2,num1+num2);
            break;
        case 2:
            printf("%f - %f = %f",num1,num2,num1-num2);
            break;
        case 3:
            printf("%f * %f = %f",num1,num2,num1*num2);
            break;
        case 4:
            printf("%f / %f = %f",num1,num2,num1/num2);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}