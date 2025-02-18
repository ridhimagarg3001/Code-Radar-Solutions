#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a consonant (alphabet but not a vowel)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // If it's not a digit, vowel, or consonant, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
