//wap  to find sun and avg of array elementsgiven by users.the array sis also given by users.
# include <stdio.h>
int main()
{
    int n,sum=0,avg=0;
    printf("enter the size of array: ")
    scanf("%d",&n);"

    int arr[n];
    printf("enter the array elements:");
    for (int i=0; i<n;i++)

    {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }

    printf("sum is %d",sum);
    avg =sum/n;
    printf("the avg is %d",avg);
    printf("%d", avg);
    return 0;
}