#include <stdio.h>

struct structure {
	char a;
	char c; //1 byte
	int b; //4 byte
};

int main() {
	printf("%zu\n", sizeof(struct structure));
}
