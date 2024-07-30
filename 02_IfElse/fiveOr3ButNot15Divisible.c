#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number\n:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("the number is divisible by 5 or 3 but not 15");
        }else{
             printf("the number is divisible by 15");
        }
    }else{
         printf("the number is not divisible by 5 or 3");
    }

    int o;
    printf("\nEnter a Number\n:");
    scanf("%d",&o);
    if((o%5==0||0%3==0)&&o%15!=0){
         printf("the number is (%d) divisible by 5 or 3 but not 15",o);
    }else{
        printf("the number (%d) is not matching the required condition" ,o);
    }
    return 0;
}