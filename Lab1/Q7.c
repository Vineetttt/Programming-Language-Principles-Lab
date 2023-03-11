#include <stdio.h>
#include <string.h>
struct person{
    char name[100];
    char dob[100];
    long mobile;
};
int main() {
    int num;
    printf("Enter the number of persons to store the information: ");
    scanf("%d",&num);
    struct person s[num];
    for(int i=0;i<num;i++){
        printf("Enter details for person %d\n",i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Date of Birth:");
        scanf("%s", s[i].dob);
        printf("Mobile number:");
        scanf("%li", &s[i].mobile);
    }
    printf("\nDisplaying Information:\n\n");
    for (int i = 0; i < num; ++i) {
        printf("Person %d\n",i+1);
        printf("First name:%s\n",s[i].name);
        printf("Date of birth:%s\n",s[i].dob);
        printf("Mobile number: %li\n", s[i].mobile);
        printf("\n");
    }
    return 0;
}