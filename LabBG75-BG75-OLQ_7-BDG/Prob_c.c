#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
// Euclidean algorithm to find the GCD of two numbers
if (b == 0) return a;
return gcd(b, a % b);
}

int main() {
// Read the number of test cases
int T;
scanf("%d", &T);

// Loop through each test case
for (int t = 1; t <= T; t++) {
// Read the values of N and x
int N, x;
scanf("%d%d", &N, &x);

// Calculate the result of the function
int result = (x * (N + 1) * N) / 2;

// Simplify the result by finding the GCD and dividing both the numerator and denominator by it
int gcd_result = gcd(result, N * N);
result /= gcd_result;
int denominator = N * N / gcd_result;

// Print the output in the required format
printf("Case #%d: %d/%d\n", t, result, denominator);
}

return 0;
}