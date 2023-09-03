// C program to create matrices and perform operations on it.
#include <stdio.h>

int main(){
    int a[10][10],b[10][10];
    int i,j,r1,c1,r2,c2;
    printf("How many rows and columns are there in 1st matrix : ");
    scanf("%d\t%d",&r1,&c1);
    printf("How many rows and columns are there in 2nd matrix : ");
    scanf("%d\t%d",&r2,&c2);
    if(r1==r2 && c1==c2){
        printf("Enter the 1st matrix elememts : ");
        for(i=0;i<r1;i++){
           for(j=0;j<c1;j++){
               scanf("%d\n",&a[i][j]);
            }
            printf("\n");
        }
        printf("Enter the 2nd matrix elememts : ");
        for(i=0;i<r2;i++){
           for(j=0;j<c2;j++){
               scanf("%d\n",&b[i][j]);
            }
            printf("\n");
        }
        printf("1st matrix entered is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("2nd matrix entered is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Matrix addition is :\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Size doesn't match, Operation not possible.");
    }

    return 0;
}