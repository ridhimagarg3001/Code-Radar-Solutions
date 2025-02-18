#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int position = 0;

    if (num != 0) {
        position = __builtin_ctz(num);
    }

    printf("%d\n", position);

    return 0;
}
