// Modern C - p. 19

#include <stddef.h>
#include <stdio.h>

// Use array notation for pointer parameters when they cannot be null.

/* These emphasize that the arguments cannot be null . */
size_t strlen(char const string[static 1]) {
    size_t length = 0;
    while (string[length] != '\0') {
        ++length;
    }
    return length;
}
// int main (int argc , char * argv [ argc +1]) ;
/* Compatible declarations for the same functions . */
// size_t strlen ( const char * string );
// int main (int argc , char ** argv );

// Use function notation for function pointer parameters when they cannot be null.
/* This emphasizes that the ˋˋ handler '' argument cannot be null . */
int atexit(void (*handler)(void)) {
    handler(); 
    return 0;
}
/* Compatible declaration for the same function . */
// int atexit ( void (* handler )( void ));

int main() {
    char const *null_ptr = NULL;
    void (*func_ptr)(void) = NULL;

    // segmentation fault 
    // printf("%zu\n", strlen(null_ptr));
    printf("%d\n", atexit(func_ptr));

    return 0;
}
