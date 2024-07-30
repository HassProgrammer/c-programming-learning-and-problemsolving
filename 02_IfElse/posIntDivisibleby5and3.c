#include<stdio.h>
int main(){
    int num;
    printf("* Enter a Number: ");
    scanf("%d",&num);
    if(num%5==0||num%3==0){
        printf("-> This number divisible by 5 or 3.");

    }else{
        printf("-> This number is not divisible by 5 or 3.");
    }
    return 0;
}