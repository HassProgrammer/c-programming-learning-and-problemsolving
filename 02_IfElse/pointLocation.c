#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates\n:");
    scanf("%d",&x);
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on x-axis");
    }
    else{
        printf("The point dose not lie on x or y axis and it is not origin.");
    }
    return 0; 
} 