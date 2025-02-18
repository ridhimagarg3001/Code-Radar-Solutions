#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int trailing_zeros = __builtin_ctz(num);

    printf("%d\n", trailing_zeros);

    return 0;
}
