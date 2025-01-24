#include <stdio.h>

int main() {
    char str[100], hobby[100];
    int age;
    scanf("%s%s", &str, &hobby);
    scanf("%d", &age);
    printf("Name: %s\n", str);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}