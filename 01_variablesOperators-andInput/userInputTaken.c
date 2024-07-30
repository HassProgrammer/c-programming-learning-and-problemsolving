#include <stdio.h>
int main(){
    float radius;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("The Area Of Circle is: %f",area);
    return 0;
}