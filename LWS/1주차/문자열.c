#include <stdio.h>

int main(void) {
    // 백준 10171 고양이
    printf("\\    /\\\n");
    printf(" )  ( ')\n");
    printf("(  /  )\n");
    printf(" \\(__)|\n");

    // 백준 10172 강아지
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");

    // 백준 11654 아스키 코드
    char input;
    
    scanf("%c", &input);
    
    printf("%d", input);

    // 백준 25083 새싹
    printf("         ,r\'\"7\n");
    printf("r`-_   ,'  ,/\n");
    printf(" \\. \". L_r\'\n");
    printf("   `~\\/\n");
    printf("      |\n");
    printf("      |\n");

    // 백준 27866 문자와 문자열
    char input[1000];
    int index;

    scanf("%s", input);
    scanf("%d", &index);

    printf("%c", input[index - 1]);

    return 0;
}