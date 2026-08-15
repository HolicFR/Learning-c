#include <stdio.h>
int gcd(int a, int b){ while(b){ int t = a % b; a = b; b = t; } return a; }
int main(void){ int a, b; printf("Enter two numbers: "); scanf("%d %d", &a, &b); printf("LCM = %d\n", (a / gcd(a, b)) * b); return 0; }
