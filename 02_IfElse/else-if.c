#include<stdio.h>
int main(){
    int cp, sp;
    printf("Enter cost price\n:");
    scanf("%d",&cp);
    printf("Enter selling price\n:");
    scanf("%d",&sp);

    if(sp > cp){
        printf("Profit");
    }else if(cp>sp){
        printf("Loss");
    }else{
        printf("No profit, no loss");
    }
    return 0;
}