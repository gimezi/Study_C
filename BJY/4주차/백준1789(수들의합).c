# include <stdio.h>
# include <stdlib.h>

long long int S, sum, i;

int main() 
{
  scanf("%d", &S);

  for (i = 1; 1; i++) {
    sum = sum + i;
    if (sum > S) {
      i--;
      break;
    }
  }
  printf("%d\n", i);
  return 0;
}