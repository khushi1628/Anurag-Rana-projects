#include <stdio.h>

void swap(int *i, int *j);

int main() {
    int a = 5;
    int b = 7;

    printf("Before swapping: a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int *i, int *j) {
    int temp;

    printf("before swapping: i = %d and j = %d\n", *i, *j);
    temp = *i;
    *i = *j;
    *j = temp;
    printf("after swapping: i = %d and j = %d\n", *i, *j);
}