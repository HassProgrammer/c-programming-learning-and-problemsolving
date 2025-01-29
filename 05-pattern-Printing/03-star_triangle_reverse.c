// * Ques : Print the given pattern
// *
// **
// ***
// ****
// - Star Triangle reverse

#include<stdio.h>
int main(){
    int value;
    printf("Enter a value:\t");
    scanf("%d",&value);
    for (int i=1; i<=value; i++){
        printf("\n");
        for(int j=1; j<=value+1-i; j++){
            printf("* ");
        }
    }

    return 0;
}