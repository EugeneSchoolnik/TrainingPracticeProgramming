#include <stdio.h>

int countSequences(int n) {
    if (n == 1) {
        return 2;
    } else if (n == 2) {
        return 3;
    }

    int prevPrevState = 1;
    int prevState = 2;

    for (int i = 0; i < n; i++) {
        int currentState = prevPrevState + prevState;
        prevPrevState = prevState;
        prevState = currentState;
    }

    return prevState;
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    if (n < 1 || n >= 10000) {
        printf("Неправильне значення n.\n");
        return 1;
    }

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
