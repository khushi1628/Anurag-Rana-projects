//wap to print a matrix of 3 by 3.
#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("enter the number of row and col");
    scanf("%d%d",&row,col);
    int a[row][col];
    printf("enter the elements of 1st matrix: ");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return 0;

}