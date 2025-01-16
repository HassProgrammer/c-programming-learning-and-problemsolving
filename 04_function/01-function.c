#include <stdio.h>
#include <string.h> // Include this for strcmp function

int main() {
    char pass[20];
    char truePass[20] = "open";
    
    printf("Enter Password:\t");
    scanf("%19s", pass); // Limit input to prevent buffer overflow
    if (strcmp(pass, truePass) == 0) { // Compare strings
        printf("Lock is open\n");
    } else {
        printf("Error\n");
    }
    return 0;
}
