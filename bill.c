// C program to create bill for shopping
#include <stdio.h>

int main() {
    int pcode[20],cost[20],qty[20],amt[20];
    int i,n,total,discount,netamount;
    total = 0;
    printf("How many products are there :");
    scanf("%d",&n);
    printf("\nEnter the shopping details\n");
    for(i=0;i<n;i++){
        printf("\nEnter product code: ");
        scanf("%d",&pcode[i]);
        printf("\nEnter product cost: ");
        scanf("%d",&cost[i]);
        printf("\nEnter product quantity: ");
        scanf("%d",&qty[i]);
        amt[i] = cost[i] * qty[i];
    }
    printf("------------------------------------");
    printf("\nPCode\tCost\tQuantity\tAmount\n");
    printf("------------------------------------");
    for(i=0;i<n;i++){
        printf("\n%5d\t%4d\t%8d\t%6d",pcode[i],cost[i],qty[i],amt[i]);
        total += amt[i];
    }
    printf("\n------------------------------------");
    printf("\nTotal bill is %d.",total);
    discount = 10*total/100;
    netamount = total - discount;
    printf("\nDiscount given is %d",discount);
    printf("\nNet amount to be paid: %d",netamount);
    

    return 0;
}