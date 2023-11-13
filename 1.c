#include <stdio.h>

int main() {
    short t1, t2, t3;

    printf("Введіть три числа, розділені пробілами:\n");
    scanf("%hd %hd %hd", &t1, &t2, &t3);

    if(t1 > 10000 || t2 > 10000 || t3 > 10000) {
        printf("Дуже велике число");
        return 1;
    }

    printf("Час, необхідний для того, щоб з'їсти один пиріг: %.2f", (float)(t1 + t2 + t3) / 3 / 3);

    return 0;
}
