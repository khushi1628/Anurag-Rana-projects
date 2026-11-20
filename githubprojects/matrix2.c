//wap a programme to find the sum  of left and right diagonal of matrix.
#include<stdio.h>
int main()
{
int a[3][3],i,j,sum1=0,sum2=0;
 printf("enter 3by3 matrix elements:");
 for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    sum1 += a[i][i];
}
for(i=0;i<3;i++)
{
    sum2 += a[i][2-i];
}
printf("Sum of left diagonal: %d\n", sum1);
printf("Sum of right diagonal: %d\n", sum2);
return 0;
}
 

