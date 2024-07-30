#include<stdio.h>
int main(){
    int a,b,c;
    printf("* Enter 1st integer: ");
    scanf("%d",&a);
    printf("* Enter 2nd integer: ");
    scanf("%d",&b);
    printf("* Enter 3rd integer: ");
    scanf("%d",&c);
    if(a>b && a>c ){
        printf("%d was the first integer and also greatest",a);
    }
    if(b>a && b>c){
        printf("%d was the 2nd integer and also greatest",b);
    }else{
        printf("%d was the 3rd integer and also greatest",c);
    }
    return 0;
}