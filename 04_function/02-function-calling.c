#include<stdio.h>
void england(){
    printf("You are in england\n");
    return;
}

void australia(){
    printf("You are in australia\n");
    england();
    return;
}
void bangladesh(){
    printf("You are in bangladesh\n");
    australia();
    return;
}
int main(){
    bangladesh();
    return 0;
}