// Ques : Print hello world 'n' times. Take 'n' as
// input from user

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Hello world\n");
    }
    return 0;
}