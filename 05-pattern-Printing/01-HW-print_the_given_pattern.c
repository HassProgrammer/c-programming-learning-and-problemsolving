// HW : Print the given pattern
// ****
// ****
// ****
// ****

#include<stdio.h>
int main(){
    int rows, columns;
    printf("Enter Rows:\t");
    scanf("%d",&rows);
    printf("Enter Columns:\t");
    scanf("%d",&columns);
    for(int i=1; i<=rows; i++){
        for (int i=1; i<=columns; i++){
            printf("*");
        }
        printf("\n");
    }
}