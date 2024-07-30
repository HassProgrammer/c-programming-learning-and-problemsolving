#include<stdio.h>
int main(){
    int costPrice, SellingPrice;
    printf("* Enter Cost Price: ");
    scanf("%d",&costPrice);
    printf("* Enter Selling Price: ");
    scanf("%d",&SellingPrice);

    if(costPrice < SellingPrice){
        printf("-> You made profit");
    }if(SellingPrice > costPrice){
        printf("-> You made incurred loss");
    }if(costPrice == SellingPrice){
        printf("-> No profit, No loss");
    }
    return 0;
}