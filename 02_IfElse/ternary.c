#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n: ");
    scanf("%d",&n);

    // ternary operator
    n%2==0 ? printf("Even number") : printf("Odd number");

    // if(n%2==0){
    //     printf("Even number");
    // }
    // else{
    //     printf("Odd number");
    // }


    return 0;
}