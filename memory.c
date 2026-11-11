//memory block in C

#include <stdio.h>

int main() {
    int a = 12;
    char b = 'A';
    float c = 123;
    char d [128];
    char e [] = "asd";
    char f [1];

    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(e));
    printf("%zu\n", sizeof(f));


    printf("Memory adresssssss\n");

    printf("%p\n", a);
    printf("%p\n", b);
    printf("%p\n", c);
    printf("%p\n", d);
    printf("%p\n", e);
    printf("%p\n", f);





}