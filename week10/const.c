#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Constant pointer to int
    int * const ptr1 = &x;

    // Pointer to constant int
    const int *ptr2 = &x;

    printf("Initially:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    // We can modify the value pointed by ptr1 because it's a constant pointer to int (not pointer to constant int)
    *ptr1 = 15;
    // ptr1 = &y; // This would be an error since ptr1 is a constant pointer and can't be reassigned

    // We can change ptr2 to point to y, but we can't change the value it points to
    ptr2 = &y;
    // *ptr2 = 25; // This would be an error since ptr2 is a pointer to constant int

    printf("\nAfter modifications:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    return 0;
}

