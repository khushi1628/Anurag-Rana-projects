// WAP TO SWAP TWO NUMBERS WITHOUT USING THIRD VARIABLE

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n");
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}