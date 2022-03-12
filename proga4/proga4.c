#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf((a >= 88 && a <= 99)? "true" : "false"); // тернарный оператор
    int b;
    scanf("%o", &b);
    printf("%d\n", ((b >> 10) % 2) == 0 ? 0 : 1); //сдвиг вправо на 10, проверка на 0 или 1
    return 0;
}