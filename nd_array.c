#include <stdio.h>

int main() {
    int array[10][20][30];
    
    int size_first_dimension = sizeof(array) / sizeof(array[0]);
    int size_second_dimension = sizeof(array[0]) / sizeof(array[0][0]);
    int size_third_dimension = sizeof(array[0][0]) / sizeof(array[0][0][0]);


    printf("Size of first dimension: %d\n", size_first_dimension);
    printf("Size of second dimension: %d\n", size_second_dimension);
    printf("Size of third dimension: %d\n", size_third_dimension);


    printf("Size of array: %zu\n", sizeof(array) / sizeof(int));
    printf("Size of array[0]: %zu\n", sizeof(array[0]) / sizeof(int));
    printf("Size of array[0][0]: %zu\n", sizeof(array[0][0]) / sizeof(int));
    printf("Size of array[0][0][0]: %zu\n", sizeof(array[0][0][0]) / sizeof(int));

    return 0;
}
