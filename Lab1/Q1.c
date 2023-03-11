#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\n Enter value for Side1 : ");
    scanf("%f",&a);
    printf("\n Enter value for Side2 : ");
    scanf("%f",&b);
    printf("\n Enter value for Side3 : ");
    scanf("%f",&c);
 
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        printf("\nA traingle can be formed from the input sides");
        if(a==b&&a==c&&b==c)
            printf("\nIt is a Equilateral Triangle.");
        else if(a==b||a==c||b==c)
            printf("\nIt is a Isosceles Triangle.");
        else if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
            printf("\nIt is a Right-angle Triangle.");
        else if(a!=b&&a!=c&&b!=c)
            printf("\nIt is a Scalene Triangle.");
    }
    else
    printf("\nThis Triangle is NOT possible.");
    return 0;
}