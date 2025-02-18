#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    // Top half of the diamond
    for (int i = 1; i <= N; i++) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Bottom half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        for (int j = N; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
