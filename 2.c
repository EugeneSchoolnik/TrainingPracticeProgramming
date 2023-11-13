#include <stdio.h>
#include <stdlib.h>

int findMin(int* nums, int size) {
    int min = nums[0];
    for (size_t i = 1; i < size; i++)
        if(nums[i] < min) min = nums[i];
    return min;
}

int main() {
    int numCount;
    printf("Введіть кількість чисел:\n");
    scanf("%d", &numCount);

    if (numCount < 2 || numCount > 20) {
        printf("Всі числа мають буди від 2 до 20:\n");
        return 1;
    }

    int *nums = malloc(numCount * sizeof(int));

    printf("Введіть числа розділені пробілами:\n");
    for (int i = 0; i < numCount; ++i) scanf("%d", &nums[i]);

    for (int i = 0; i < numCount; ++i)
        if (nums[i] < 2 || nums[i] > 20) {
            printf("Всі числа мають буди від 2 до 20:\n");
            return 1;
        }

    int min = findMin(nums, numCount);
    int LCM = min;

    while (1) {
        int count = 0;

        for (size_t i = 0; i < numCount; i++)
            if (LCM % nums[i] != 0) {
                count++;
                break;
            }

        if (!count) break;

        LCM += min;
    }

    printf("LCM: %d", LCM);

    free(nums);
    return 0;
}
