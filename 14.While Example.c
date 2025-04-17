#include <stdio.h>

int main() {
    int n;
    int f = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    int i = 1;
    while(i <= n) {
        f *= i;
        i++;
    }

    printf("Factorial = %d\n", f);

    return 0;
}
