//wap to print a matrix and sum  of 3 by 3.
#include <stdio.h>
 int main()
{
    int row, col, i, j,sum=0;
      printf("Enter the value of rows and columns: ");
    scanf("%d %d", &row, &col);
     int matrix[row][col];
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter element at position (%d,%d): ", i, j);
            scanf("%d", &matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
     printf(" Matrix is:\n");
     for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements in the matrix is: %d\n", sum);
    return 0;
}