// 백준 10988 팰린드롬인지 확인하기
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[101];
    scanf("%s", string);
    
    int answer = 1;
    int len = strlen(string);
    char * start = string;
    char * end = string + len - 1;
    
    while (start < end) {
        if (*start != *end) {
            answer = 0;
            break;
        }
        
        start++;
        end--;
    }
    
    printf("%d", answer);
    
    return 0;
}