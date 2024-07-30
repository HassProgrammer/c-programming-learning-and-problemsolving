#include <stdio.h>
int main(){
    int a, b , sum;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum = a + b;
    printf("The Result is: %d",sum);
   
    printf("\nEnter 2 numbers for exite ->\n");
    int c, d;
    scanf("%d%d",&c,&d);
    printf("Thank yoy!\nfirst exite number = %d, Second exite Number = %d",c,d);
    return 0;
}