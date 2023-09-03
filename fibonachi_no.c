#include <stdio.h>

int main() {
    int i,n;
    int t1 = 0,t2 = 1,nexterm = t1+t2;
    printf("Fibonacci sequence\n");

    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("\nFibonacci series : %d, %d, ",t1,t2);
    // for(i=0;i<=n;++i){
    //     printf("%d, ",nexterm);
    //     t1 = t2;
    //     t2 = nexterm;
    //     nexterm = t1+t2;
    // }

    //Fibonacci series upto "n" terms
    while (nexterm<=n){
        printf("%d, ",nexterm);
        t1 = t2;
        t2 = nexterm;
        nexterm = t1+t2;
    }
    


    return 0;
}