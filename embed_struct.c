// Modern C - p. 77

#include <stdio.h>
#include <time.h>

struct person {
    char name [256];
    struct stardate {
        struct tm date ;
        struct timespec precision ;
    } bdate ;
};


int main() {    
    struct person p;

    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(p.name));
    printf("%zu\n", sizeof(p.bdate));
    printf("%zu\n", sizeof(p.bdate.date));
    printf("%zu\n", sizeof(p.bdate.precision));

}
