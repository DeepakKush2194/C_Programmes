// Patterns in C language
#include <stdio.h>

int main() {
    int a,b,n,s;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("Here is your output: \n");
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%c",64+b);
        }
        for(s=1;s<=n-a;s++){
            printf("  ");
        }
        for(b=a;b>=1;b--){
            printf("%c",64+b);
        }
        printf("\n");
    }

    return 0;
}