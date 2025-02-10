#include<stdio.h>
#include<math.h>

int main(){
    int number, power;
    printf("Enter number:\t");
    scanf("%d",&number);
    printf("Enter power:\t");
    scanf("%d",&power);
    int result = pow(number, power);
    printf("Result = %d",result);
    return 0;
}