// 백준 2941 크로아티아 알파벳
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[101];
    scanf("%s", string);

    int len = strlen(string);
    int count = len; 

    for (char * p = string; *p != '\0'; p++) {
        if (*p == 'c' && (*(p + 1) == '=' || *(p + 1) == '-')) {
            count--;
        } else if ((*p == 'd' && *(p + 1) == 'z' && *(p + 2) == '=') || (*p == 'd' && *(p + 1) == '-')) {
            count--;
        } else if ((*p == 'l' || *p == 'n') && *(p + 1) == 'j') {
            count--;
        } else if ((*p == 's' || *p == 'z') && *(p + 1) == '=') {
            count--;
        }
    }

    printf("%d", count);

    return 0;
}
