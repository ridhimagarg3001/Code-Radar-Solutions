#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a, &b);
    int r = (a>>b) & 1;
    printf("%d",r);
    return 0;
}