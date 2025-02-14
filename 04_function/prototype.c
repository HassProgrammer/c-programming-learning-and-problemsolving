#include <stdio.h>
// void fun(){
//     printf("Hello");
// }
// int main(){
//     fun();
//     return 0;
// }
// if we write this fun() function after main function 
// the code will show error
// // void fun(){
// //     printf("Hello");
// // }

// for make this solution we use proto type example down below

int main(){
    void fun();
    fun();
    return 0;
}
 void fun(){
    printf("Using prototype");
 }