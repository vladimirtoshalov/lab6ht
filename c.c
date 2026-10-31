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

    int n1 = num / 1000;
    int n2 = (num / 100) % 10;
    int n3 = (num / 10) % 10;
    int n4 = num % 10;

    if (n1 == n4 && n2 == n3) {
        printf("Число является перевертышем\n");
    }
    else {
        printf("Число не является перевертышем\n");
    }

    return 0;
}
