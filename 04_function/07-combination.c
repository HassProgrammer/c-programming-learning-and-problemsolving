// Ques : Combination and Permutation
// n
//  C
//   r
#include <stdio.h>
int factorial(int x){
    int fact = 1; 
    for(int i = 2; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n, r;
    printf("Enter n:\t");
    scanf("%d",&n);
    printf("Enter r:\t");
    scanf("%d",&r);
    
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}