#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("The number is divisible by 5 and 3\nand your given number was: %d",n);
        }
        else{
            printf("The number is not divisible by 5 and 3\nand your given number was: %d",n);
        }
    }
    else{
            printf("The number is not divisible by 5 and 3\nand your given number was: %d",n);
        }
    return 0;
}