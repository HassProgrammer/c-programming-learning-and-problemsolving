#include<stdio.h>
int main(){
    int num;
    printf("* Enter a Number: ");
    scanf("%d",&num);
    if(num > 99 && num == 100 && num < 100 ){
        printf("-> It is a three digit number.");

    }else{
        printf("-> It is not a three digit number.");
    }
}