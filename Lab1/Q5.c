#include <stdio.h>
 
int multiply(int firstnum, int secondnum){
    if(secondnum == 0)
        return 0;
    else
       return (firstnum + multiply(firstnum, secondnum-1));
}
int main(){
   float firstnum, secondnum, ans;
   printf("Enter two numbers \n");
   scanf("%f %f",&firstnum,&secondnum);
   ans = multiply(firstnum,secondnum);
   printf("Multiplication of two numbers is %f",ans);
}
