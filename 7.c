#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Введіть 6 чисел, розділені пробілами:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int intersectionPoints = 0;
    const int distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (abs(r1 - r2) <= distance && distance <= r1 + r2) // |r1 - r2| ≤ d ≤ r1 + r2
        intersectionPoints = 1;

    if (abs(r1 - r2) < distance && distance < r1 + r2) // |r1 - r2| < d < r1 + r2
        intersectionPoints = 2;

    if (abs(r1 - r2) == 0 && distance == 0) // |r1 - r2| == 0 && d == 0
            intersectionPoints = -1;

    printf("Кількість точок перентину: %d", intersectionPoints);

    return 0;
}
