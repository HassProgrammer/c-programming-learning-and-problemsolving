// HW : Print all the odd numbers from 1 to 100
#include<stdio.h>
int main(){
    int number = 100;
    for(int i=1; i<=number; i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}