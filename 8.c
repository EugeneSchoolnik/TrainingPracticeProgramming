#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int factorial(int a) {
    if(a > 0) return a * factorial(a - 1);
    return 1;
}

struct symbol {
    char value;
    int count;
};

int main() {
    char word[15];

    printf("Введіть слово: ");
    scanf("%49s", &word);

    const int length = strlen(word);
    if(length > 14) {
        printf("Максимальна довжина слова 14 символів!");
        return 1;
    }
    struct symbol *chars = malloc(length * sizeof(struct symbol));
    int charsLength = 0;

    for (int i = 0; i < length; i++) {
        int isExist = 0;
        int indexExist = 0;
        for (int j = 0; j < charsLength; j++)
            if (word[i] == chars[j].value){
                isExist = 1;
                indexExist = j;
                break;
            }
        if (isExist) chars[indexExist].count++;
        else {
            chars[charsLength] = (struct symbol){ word[i], 1 };
            charsLength++;
        }
    }

    int productFactors = 1;
    for (int i = 0; i < charsLength; i++)
        productFactors *= factorial(chars[i].count);

    int anagramsCount = factorial(length) / productFactors;

    printf("Кількість можливих анаграм: %d", anagramsCount);

    free(chars);
    return 0;
}
