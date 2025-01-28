#include <stdio.h>

int main() {
    int N, r, c;
    scanf("%d", &N);
    for(r=N;r>=1;r--) {
        for(c=1;c>=1;c++) {
            printf("* ");
        } printf("\n");
    }
    return 0;
}