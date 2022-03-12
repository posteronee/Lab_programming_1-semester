#include <stdio.h>

int main() {
    int a;
    char b;
    scanf ("%d %c", &a, &b); // & - передает значене в адрес переменной
    printf ("%d %c", a , b ); // %d - считывает цифру, %c - считывает символ

    return 0;
}