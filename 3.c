#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Введіть кількість розрядів: ");
    scanf("%d", &p);

    if(p > 30 || p < 2) {
        printf("Кількість розрядів має бути від 2 до 30");
        return 1;
    }

    printf("Кількість чисел із р розрядів: %d", (int)(pow(2, p) - (p - 2)));

    return 0;
}
