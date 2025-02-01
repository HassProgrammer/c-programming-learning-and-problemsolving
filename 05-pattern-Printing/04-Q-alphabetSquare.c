// Ques : Print the given pattern
// ABCD
// ABCD
// ABCD
// ABCD

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a = 1;
        printf("\n");
        for(int j=1; j<= n; j++){
            int d = a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
    }
    return 0;
}