#include <stdio.h>

int main() {
    int i,size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("EVEN NUMBERS : \n");
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if (a[i]%2==0) printf("%d\n",a[i]);
        }
    }
    printf("ODD NUMBERS : \n");
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if (a[i]%2==1) printf("%d\n",a[i]);
        }
    }
    return 0;
}