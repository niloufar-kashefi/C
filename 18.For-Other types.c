#include <stdio.h>

int main() {
    int i, j;
    for (i = 1, j = 9; i < j; i++, j--) {
        printf("%d %d\n", i, j);
    }
    return 0;
}
