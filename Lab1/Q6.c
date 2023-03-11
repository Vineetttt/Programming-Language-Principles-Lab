#include <stdio.h>

int main() {
    float num1,num2,num3,ans;
    printf("\nEnter the first number: ");
    scanf("%f",&num1);
    printf("\nEnter the second number: ");
    scanf("%f",&num2);
    printf("\nEnter the third number: ");
    scanf("%f",&num3);
   
    ans = num1>num2 ? (num1>num3?num1:num3):(num2>num3 ? num2:num3);
    printf("Greatest of the three numbers is: %f",ans);

    return 0;
}