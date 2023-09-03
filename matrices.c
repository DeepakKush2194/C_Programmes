// C program to create matrices and perform operations on it.
#include <stdio.h>

int main(){
    int a[10][10],i,j,r,c;
    printf("How many rows and columns are there : ");
    scanf("%d\t%d",&r,&c);
    printf("Enter the elements of the matrix : ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d\n",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix entered is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //Transpose by swapping rows and columns & a[j][i] from a[i][j]
    printf("\nMatrix Transpose is:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}