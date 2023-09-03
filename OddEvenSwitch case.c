// Program to find odd even using switch case
#include <stdio.h>

int main() {
    int num;
    printf("Enter any number to check ODD & EVEN: ");
    scanf("%d",&num);
    switch (num % 2){
        case 0:
        printf("EVEN Number");
        break;
        case 1:
        printf("ODD Number");
        break;
        default:
        printf("Invalid Option");
    }

    return 0;
}