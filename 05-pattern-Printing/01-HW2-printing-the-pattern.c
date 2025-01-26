// Ques : Print the given pattern
// 1234
// 1234
// 1234
// 1234

#include<stdio.h>
int main(){
    int rows, columns;
    printf("Enter Rows:\t");
    scanf("%d",&rows);
    printf("Enter Columns:\t");
    scanf("%d",&columns);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}