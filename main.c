
#include<stdio.h>
int main()
{
    int i, j, row, col;
    printf("Enter number of row you want: ");
    scanf("%d", &row);
    
    printf("Enter number of column you want: ");
    scanf("%d", &col);
    
    int a[row][col], b[row][col], c[row][col];
    
    if (row != col){
        printf("Addition Not Possible please write it correctly.");
        return 0;
    }
    

    printf("Enter elements of First %dx%d metric:\n ", row,col);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    i=0;
    j=0;
    
    printf("Enter elements of Second %dx%d metric:\n ", row,col);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("b[%d][%d] = ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    
    i=0;
    j=0;
    
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    i=0;
    j=0;
    printf("Addition of First and second matrix is: \n");
    
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    
}
