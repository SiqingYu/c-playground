// 21st Century C (p. 138)

#include <stdio.h>

int f(void *in){
    if (*(char*)in==0) return 1;
    else return 1 + f(&(in[1])); //This won't work.
}

int main() {
    char sample[] = "abcdefg\n";
    printf("size of void *: %d\n", sizeof(void *));
    printf("size of char *: %d\n", sizeof(char *));
    printf("f(void *) output: %d\n", f(sample));
}
