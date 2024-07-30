#include <stdio.h>
int main(){
    int l,b;
    printf("* Enter Length: ");
    scanf("%d",&l);
    printf("* Enter Breadth: ");
    scanf("%d",&b);
    int area = l*b;
    int perimeter = 2 * (l + b);
    if(area > perimeter){
        printf("-> Area is greater then Perimeter.");
    }
    if(area == perimeter){
        printf("-> Area is equal with Perimeter.");
    }else{
        printf("-> Area is not greater then Perimeter.");
    }
    return 0;
}