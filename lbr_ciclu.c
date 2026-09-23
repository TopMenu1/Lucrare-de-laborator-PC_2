#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c; 

    printf("Introduceti n (pozitia numarului Fibonacci): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Va rugam sa introduceti un numar natural.\n");
    } else if (n == 0) {
        printf("Al %d-lea numar Fibonacci este: %d\n", n, a);
    } else if (n == 1) {
        printf("Al %d-lea numar Fibonacci este: %d\n", n, b);
    } else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Al %d-lea numar Fibonacci este: %d\n", n, b);
    }

    return 0;
}
