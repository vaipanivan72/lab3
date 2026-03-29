#include <stdio.h>
#include <math.h>	

int main() {
    int x, y, b;
    double a;

    printf("Введіть цілі числа x, y, b: ");
    scanf("%d %d %d", &x, &y, &b);

    // Перевірка умови b < 0
    if (b < 0) {
        if (x - 4 * y >= 0) {
            a = b + sqrt(x - 4 * y);
            printf("Результат a = %.2f\n", a);
        }
        if (x - 4 * y < 0) {
            printf("Помилка: від'ємне число під коренем!\n");
        }
    }

    // Перевірка умови b > 7
    if (b > 7) {
        if (2 * y - 3 * x != 0) {
            a = (double)(b * y) / (2 * y - 3 * x);
            printf("Результат a = %.2f\n", a);
        }
        if (2 * y - 3 * x == 0) {
            printf("Помилка: ділення на нуль!\n");
        }
    }

    // Перевірка умови b = 0
    if (b == 0) {
        if (b * b - x * y != 0) {
            a = b * b - 2 * x * y + 4.0 / (b * b - x * y);
            printf("Результат a = %.2f\n", a);
        }
        if (b * b - x * y == 0) {
            printf("Помилка: ділення на нуль!\n");
        }
    }

    return 0;
}
