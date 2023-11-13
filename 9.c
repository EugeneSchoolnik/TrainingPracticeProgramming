#include <stdio.h>
#include <math.h>

#define maxY pow(2, 31)

int displaySteps(int steps) {
    printf("Кількість кроків: %d", steps);
    return 0;
}

int main() {
    unsigned int x, y;
    printf("Введіть 2 числа: ");
    scanf("%d %d", &x, &y);

    if (x < 0) {
        printf("X не може бути менше 0");
        return 1;
    }
    if (y < x) {
        printf("Y не може бути менше X");
        return 1;
    }
    if (y > maxY) {
        printf("Y не може бути більше 2^31");
        return 1;
    }

    int steps = 0;
    int delta = y - x;

    if (delta <= 2) return displaySteps(delta);
    else {
        delta -= 2;
        steps = 2;
        if (delta % 2 == 0) steps += delta / 2;
        else steps += (delta-1) / 2 + 1;
    }
    displaySteps(steps);

    return 0;
}
