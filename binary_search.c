#include <stdio.h>

int main() {
    int a[10]={11,15,18,25,34,38,58,64,82,86};
    int i,num,beg=0,mid,end=9,found;

    printf("Enter a no. to be searched: ");
    scanf("%d",&num);
    
    while(beg <= end){
        mid = (beg+end)/2;
        if (a[mid]==num){
            printf("Number found at position %d",mid);
            found = 1;
            break;
        }
        else if(num<a[mid])
            end = mid - 1;
        else if(num>a[mid])
            beg = mid + 1;
    }
    if(found == 0){
        printf("No. not found");
    }

    return 0;
}