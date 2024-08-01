#include<stdio.h>
int main(){
    double x1, y1, x2, y2, x3, y3;
    printf("Enter The Value of 'x1'\n:");
    scanf("%lf",&x1);
    printf("Enter The Value of 'y1'\n:");
    scanf("%lf",&y1);
    printf("Enter The Value of 'x2'\n:");
    scanf("%lf",&x2);
    printf("Enter The Value of 'y2'\n:");
    scanf("%lf",&y2);
    printf("Enter The Value of 'x3'\n:");
    scanf("%lf",&x3);
    printf("Enter The Value of 'y3'\n:");
    scanf("%lf",&y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);

    if(m1==m2){
        printf("The three points fall one on straigth line");
    }else{
        printf("The three points not fall one on straigth line");
    }
    return 0;
}