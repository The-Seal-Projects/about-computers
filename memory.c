#include <stdio.h>

int main() {
    int a = 12;
    char b = 'A';
    float c = 123;
    char d;
    char e[] = "asd";
    char f;

    printf("Sizes (bytes)\n");
    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(e));
    printf("%zu\n", sizeof(f));

    printf("Memory addresses\n");
    printf("%p\n", (void *)&a);
    printf("%p\n", (void *)&b);
    printf("%p\n", (void *)&c);
    printf("%p\n", (void *)&d);
    printf("%p\n", (void *)e);
    printf("%p\n", (void *)&f);

    return 0;
}
