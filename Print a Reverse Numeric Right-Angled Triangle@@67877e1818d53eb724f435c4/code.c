#include <stdio.h>

int main() {
    int N;
    
    // Read the input
    scanf("%d", &N);
    
    // Loop through each row
    for (int i = N; i >= 1; i--) {
        // Print numbers from i to 1
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
