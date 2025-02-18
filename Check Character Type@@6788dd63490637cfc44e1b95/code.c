#include <stdio.h>


int main() {
    char ch;
    
    // Input a single character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is a letter
    if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // If the character is neither a letter nor a digit, it's a special character
    else {
        printf("Special Character\n");
    }
    
    return 0;
}
