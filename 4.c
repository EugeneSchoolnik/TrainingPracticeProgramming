#include <stdio.h>

int main() {
    int n;
    printf("Введіть число: ");
    scanf("%d", &n);

    if (n < 2 || n > 149) {
        printf("Число має бути від 2 до 150");
        return 1;
    }

    int count = 0;

    for (size_t i = 1; i < n; i++)
        if(n % i == n / i) count++;

    printf("Кількість рівних дільників: %d", count);

    return 0;
}
