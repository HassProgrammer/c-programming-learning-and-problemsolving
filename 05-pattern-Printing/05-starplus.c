// Ques : Print the given pattern
//     *
//     *
// **********      
//     *
//     *  
#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:\t");
    scanf("%d",&n);

    for(int i=1; i<=n; i=i+1){
        for(int j=1; j<=n; j++){
            // printf("*");
            if( j == n/2+1 || i == n/2+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}