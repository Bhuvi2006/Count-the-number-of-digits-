#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    while (num != 0) {
        // Solution as follows
        count = count + 1;
        num = num / 10;     // remove last digit from num using the num/10 operation
    }
    printf("%d", count);
    return 0;
}
