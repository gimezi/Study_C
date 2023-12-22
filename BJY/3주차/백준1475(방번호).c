# include <stdio.h>
# include <string.h>
# define MAX(a,b) ((a) > (b) ? (a) : (b))

int main(void) {
  char chr[7];
  int arr[11] = {0,};
  int i,ans = 0;
  scanf("%s", chr);

  // 숫자의 개수 세기
  for (i = 0; i < strlen(chr); i++) {
    arr[chr[i] - '0']++;
  }
  for (i = 0; i < 10; i++) {
    if (i != 6 && i != 9) {
      ans = MAX(arr[i], ans);
    }
  }
    
  ans = MAX(((arr[6] + arr[9] + 1) / 2), ans); // 수정: arr 사용 및 괄호 추가
  
  printf("%d\n", ans);
  
}