#include <stdio.h>

int main() {

        printf("size of short: %lu\n", sizeof(short));
        printf("size of short int: %lu\n", sizeof(short int));
        printf("size of int: %lu\n", sizeof(int));
        printf("size of long: %lu\n", sizeof(long));
        printf("size of long int: %lu\n", sizeof(long int));
        printf("size of long long int: %lu\n", sizeof(long long int));

        printf("size of float: %lu\n", sizeof(float));
        printf("size of double: %lu\n", sizeof(double));

        printf("size of char: %lu\n", sizeof(char));
}
