// Cprogram to ADD, SUBSTRACT and find PRODUCT of two matrices...
#include <stdio.h>

int main() {
    int a[10][10],b[10][10],c[10][10];
    int i,j,r1,r2,c1,c2;
    printf("How many rows and columns are in 1st matrix :");
    scanf("%d\t%d",&r1,&c1);
    printf("How many rows and columns are in 2nd matrix :");
    scanf("%d\t%d",&r2,&c2);
    if(r1==r2 && c1==c2){
        printf("Enter the elements of 1st matrix:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d\t",&a[i][j]);
            }
        }
        printf("Enter the elements of 2nd matrix:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d\t",&b[i][j]);
            }
        }
        printf("Elements of 1st matrix:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Elements of 2nd matrix:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("Sum of the matrices is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
        printf("Product of the matrices:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<c1;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nSize doesn't match, Operation can't be done.");
    }
    

    return 0;
}