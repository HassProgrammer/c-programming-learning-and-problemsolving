#include<stdio.h>
int main(){
    int value;
    printf("Enter a number: ");
    scanf("%d",&value);
    if(value<0){
        value = value * (-1);
    }
    printf("The absolute number is: %d",value);
    return 0;
}