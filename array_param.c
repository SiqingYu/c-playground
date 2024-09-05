#include <stdio.h>

// The innermost dimension of an array parameter to a function is lost.
int array_size(double a[]) {
    return sizeof(a);
}

int main() {

    double a[] = { 1.0, 2.0, 3.0};

    printf("Size of array a: %d\n", sizeof(a));
    printf("array_size(a): %d\n", array_size(a));
    
    return 0;
}