#include <stdio.h>
int main(){
    int a,b, result;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    result = a%b;
    printf("The Reminder when %d is Divided by %d is: %d",a,b,result);
}