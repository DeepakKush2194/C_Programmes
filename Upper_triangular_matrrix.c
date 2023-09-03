#include <stdio.h>

int main(){
    int a[10][10],i,j,n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("Matrix entered is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Upper triangular is:\n");
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}