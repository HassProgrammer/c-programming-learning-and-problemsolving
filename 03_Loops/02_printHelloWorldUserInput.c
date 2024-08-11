// Ques : Print hello world 'n' times. Take 'n' as
// input from user
#include<stdio.h>
int main(){
    int n;
    printf("How many time do you want to print?\n: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++ ){
        printf("Hello world\n");
    }
    return 0;
}