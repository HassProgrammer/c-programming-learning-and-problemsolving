#include<stdio.h>
int main(){
    int a,b,c;
    printf("* Enter 1st integer: ");
    scanf("%d",&a);
    printf("* Enter 2nd integer: ");
    scanf("%d",&b);
    printf("* Enter 3rd integer: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
            printf("%d is greatest ",a);
        else
            printf("%d The greatest ",c);
    
    }else{
        if(b>c)
            printf("%d is greatest",b);
        else
            printf("%d is greatest");
    }
    return 0;
}