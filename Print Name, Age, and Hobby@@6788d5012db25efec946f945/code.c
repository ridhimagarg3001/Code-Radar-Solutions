#include <stdio.h>

int main() {
    char str[100], hobby[100];
    int age;
    scanf("%s%s", &str, &hobby);
    scanf("%d", &age);
    printf("Name: %s\nAge: %d\nHobby: %s", str,age,hobby);
    return 0;
}