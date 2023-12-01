#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char num[6];

    while (1) {
        scanf("%s", num);
        if (strcmp(num, "0") == 0) {
            break;
        }

        if (is_palindrome(num)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
