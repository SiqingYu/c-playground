#include <stdio.h>

// The innermost dimension of an array parameter to a function is lost.
void array_size(double a[])
{
    printf("sizeof(v) inside function: %ld\n", sizeof(a));
}

// Only the innermost dimension of an array parameter is rewritten.
void array_size_2d(size_t n, size_t m,
                    double a[n][m])
{
    printf("sizeof(a) inside function: %ld\n", sizeof(a));
    printf("sizeof(a[0]) inside function: %ld\n", sizeof(a[0]));
    printf("sizeof(*a) inside function: %ld\n", sizeof(*a));
}

int main() {
    double v[] = {1.0, 2.0, 3.0};
    printf("sizeof(v): %ld\n", sizeof(v));
    array_size(v);

    double a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("sizeof(a): %ld\n", sizeof(a));
    array_size_2d(2, 3, a);

    return 0;
}
