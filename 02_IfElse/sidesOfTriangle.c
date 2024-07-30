#include<stdio.h>
int main(){
    int a,b,c;
    printf("* Enter 1st integer: ");
    scanf("%d",&a);
    printf("* Enter 2nd integer: ");
    scanf("%d",&b);
    printf("* Enter 3rd integer: ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valid triangle");
    }else{
        printf("Invalid triangle");
    }
    return 0;
}