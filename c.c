#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");

    int num;

    printf("Введите четырехзначное число\n");

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num < 1000 || num > 9999) {
        printf("Число не является четырехзначным\n");
        return 0;
    }

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    if (d1 == d4 && d2 == d3) {
        printf("Число является перевертышем\n");
    }
    else {
        printf("Число не является перевертышем\n");
    }

    return 0;
}
