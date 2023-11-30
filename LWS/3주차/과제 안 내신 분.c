// 백준 5597 과제 안 내신 분..?
#include <stdio.h>

int main(void) {
    int students[32] = {0};
    
    for (int index = 1;index <= 28;index++) {
        int student;
        scanf("%d", &student);
        
        students[student] = 1;
    }
    
    for (int index = 1;index <= 30;index++) {
        if (students[index] == 0) {
            printf("%d\n", index);
        }
    }

    return 0;
}
