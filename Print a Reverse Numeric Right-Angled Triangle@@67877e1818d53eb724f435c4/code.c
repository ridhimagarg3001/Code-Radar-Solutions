#include <stdio.h>

int main() {
    int N;
    
    // Read the input
    scanf("%d", &N);
    
    // Loop through each row
    for (int i = N; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
