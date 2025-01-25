// Ques: Print the given pattern
// *****
// *****
// *****

#include <stdio.h>
int main(){
 
    // printf("*****\n*****\n*****\n");
    int rows, columns;
    printf("Enter number of rows:\t");
    scanf("%d",&rows);
    printf("Enter number of columns:\t");
    scanf("%d",&columns);

    for (int i=1; i<=columns; i++){
        
        for(int i=1; i<=rows; i++){
            printf("*");
        }   
        printf("\n");
    }
    



    return 0;
}