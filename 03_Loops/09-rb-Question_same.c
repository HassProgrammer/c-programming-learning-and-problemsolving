// Ques : Print hello world 'n' times. Take 'n' as
// input from user

#include <stdio.h>
int main(){

    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);

    for(int i=1; i<=n; i=i+2){
        printf("Hello world\n");
    }


    return 0;
}