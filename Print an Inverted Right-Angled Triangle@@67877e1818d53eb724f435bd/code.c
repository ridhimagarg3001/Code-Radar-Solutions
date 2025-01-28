#include <stdio.h>

int main() {
    int r, c, a;
    scanf("%d", &a);
    for(r=a;r>=1;r--)
    {
        for c=1;c<=r;c++;
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}