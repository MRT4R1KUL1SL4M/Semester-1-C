#include <stdio.h>

int main() {
    char str[100001];
    int cons = 0;
    char v[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    fgets(str, sizeof(str), stdin);
    for (int i=0; str[i] != '\0'; i++) {
        int vowel = 0;
        for (int j=0; v[j] != '\0'; j++) {
            if (str[i] == v[j]) {
                vowel = 1;
                break;
            }
        }
        if (!vowel && str[i] != '\n') {
            cons++;
        }
    }
    printf("%d\n", cons);
    return 0;
}