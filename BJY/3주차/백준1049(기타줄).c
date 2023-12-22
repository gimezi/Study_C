#include<stdio.h>

int main() {
  int N,M,i;
  // 패키지 가격, 낱개 가격
  int arr[2] = {1000,1000};
  int package, one, sum = 0;
  scanf("%d %d", &N, &M);

  for (i=0;i<M;i++) {
    scanf("%d %d",&package,&one);
    if (package < arr[0])
      arr[0] = package;
    if ( one < arr[1])
      arr[1] = one;
  }

  if (arr[1] * 6 <= arr[0])
    sum = arr[1] * N;
  else {
    // 살수 있는 패키지 들을 삼
    sum = (N/6) * arr[0];
    // 패키지를 사고 남은 개수들 계산
    if (N % 6 != 0) {
      if (arr[0] < arr[1] * (N % 6))
        sum += arr[0];
      else
        sum += arr[1] * (N%6);
    }
  }
  printf("%d", sum);
  return 0;
}