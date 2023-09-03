// C progrm to print identity matrix
#include <stdio.h>

int main() {
    int a[10][10],i,j,n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}