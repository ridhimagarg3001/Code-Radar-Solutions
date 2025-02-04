#include <stdio.h>

int main() {
    int N, r, c;
    scanf("%d", &N);
    for(r=1;r<=N;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}