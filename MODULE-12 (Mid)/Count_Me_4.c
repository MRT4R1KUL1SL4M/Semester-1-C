#include <stdio.h>
#include <string.h>

int main() {
    char str[10001];
    scanf("%s", str);
    
    int a[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            a[str[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] > 0) {
            printf("%c - %d\n", 'a' + i, a[i]);
        }
    }

    return 0;
}
