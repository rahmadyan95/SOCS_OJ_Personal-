#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {

  int T;
  scanf("%d", &T);

  
  for (int t = 1; t <= T; t++) {
      
      int N, x;
      scanf("%d%d", &N, &x);
    
      int result = (x * (N + 1) * N) / 2;
    
      int gcd_result = gcd(result, N * N);
      result /= gcd_result;
      int denominator = N * N / gcd_result;
    
      printf("Case #%d: %d/%d\n", t, result, denominator);
    }

return 0;
}
