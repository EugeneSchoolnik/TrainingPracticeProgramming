#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    printf("Введіть 4 числа, розділені пробілами:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Довжина вектора: %f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;
}
