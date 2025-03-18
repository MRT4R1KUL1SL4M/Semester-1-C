#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) { 
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main() {
    char S[1001];

    fgets(S, sizeof(S), stdin);
    if (S[strlen(S) - 1] == '\n') {
        S[strlen(S) - 1] = '\0';
    }
    if (is_palindrome(S)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
