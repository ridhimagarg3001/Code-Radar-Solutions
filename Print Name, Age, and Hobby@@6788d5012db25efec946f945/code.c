#include <stdio.h>

int main() {
    char str[100], hobby[100];
    int age;
    scanf("%s%s", &str, &hobby);
    scanf("%d", &age);
    printf("Name: ", str);
    printf("Age: ", age);
    printf("Hobby: ", hobby);
    return 0;
}