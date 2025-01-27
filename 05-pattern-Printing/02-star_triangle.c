// * Ques : Print the given pattern
// *
// **
// ***
// ****
// - Star Triangle
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value:\t");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("\n");
        for(int j=1; j<=i; j++){
            printf("*");
        }
    }
    return 0;
}