//wap to print natural numbers and their squares.
#include <stdio.h>
int main()
{
    int i = 1;

    do
    {
        printf("%d\t%d\n", i, i * i);
        i++;
    }
    while (i <= 10);

    return 0;
}