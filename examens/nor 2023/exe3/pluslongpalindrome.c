#include <stdio.h>
#include <string.h>

char *pluslongpalindrome(char *phrase) {
    int length = strlen(phrase);
    char *longestPalindrome = NULL;
    int max = 0;

    for (int i = 0; i < length; i++) {
        // Check for odd length palindromes
        int left = i, right = i;
        while (left >= 0 && right < length && phrase[left] == phrase[right]) {
            if (right - left + 1 > max) {
                max = right - left + 1;
                longestPalindrome = &phrase[left];
            }
            left--;
            right++;
        }

        // Check for even length palindromes
        left = i, right = i + 1;
        while (left >= 0 && right < length && phrase[left] == phrase[right]) {
            if (right - left + 1 > max) {
                max = right - left + 1;
                longestPalindrome = &phrase[left];
            }
            left--;
            right++;
        }
    }
    // Add a null terminator to mark the end of the longest palindrome
    if (longestPalindrome != NULL) {
        longestPalindrome[max] = '\0';
    }
    return longestPalindrome;
}

int main() {
    char phrase[] = "babad";
    char *result = pluslongpalindrome(phrase);
    if (result != NULL) {
        printf("Longest palindrome: %s\n", result);
    } else {
        printf("No palindrome found.\n");
    }
    return 0;
}
