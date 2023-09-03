// Program to print days of the Week using Switch Operator
#include <stdio.h>

int main() {
    int day;
    printf("Enter your day number: ");
    scanf("%d",&day);
    switch (day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid Day Number!!!!!!!\tEnter valid number.");
    }

    return 0;
}