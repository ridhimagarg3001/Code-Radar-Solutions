#include <stdio.h>

void print_binary(int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    // Removing leading zeros
    int leading_zeros = 0;
    if (num == 0) {
        printf("0\n");
    } else {
        print_binary(num);
        printf("\n");
    }

    return 0;
}
