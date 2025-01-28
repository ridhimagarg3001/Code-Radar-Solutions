#include <stdio.h>

int main() {
    int r, c;
    scanf("%d", &r);
    for(r=%d;r>=1;r--)
    {
        for c=1;c<=r;c++;
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}