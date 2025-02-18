#include <stdio.h>

void print_binary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int found_one = 0;  // Flag to ignore leading zeros
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1) {
            found_one = 1;  // Start printing bits after the first '1'
        }

        if (found_one) {
            printf("%d", bit);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);

    print_binary(num);
    printf("\n");

    return 0;
}
