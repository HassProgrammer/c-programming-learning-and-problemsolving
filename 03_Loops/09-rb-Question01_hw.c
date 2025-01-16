#include<stdio.h>
int main(){
    int  n;
    printf("Enter the value of n:\t");
    scanf("%d", &n);
    for (int i=1; i<=n; i=i+4){
        printf("Hello world\n");
    }
}