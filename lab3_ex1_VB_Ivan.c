#include <stdio.h>
#include <math.h>

int main() {
    int x, y, b;
    double a;

    printf("Введіть цілі числа x, y, b: ");
    scanf("%d %d %d", &x, &y, &b);

    if (b < 0) {
        // Обчислення b + sqrt(x - 4y)
        if (x - 4 * y >= 0) {
            a = b + sqrt(x - 4 * y);
            printf("Результат a = %.2f\n", a);
        } else {
            printf("Помилка: корінь з від'ємного числа.\n");
        }
    } 
    else if (b > 7) {
        // Обчислення by / (2y - 3x)
        if (2 * y - 3 * x != 0) {
            a = (double)(b * y) / (2 * y - 3 * x);
            printf("Результат a = %.2f\n", a);
        } else {
            printf("Помилка: ділення на нуль.\n");
        }
    } 
    else if (b == 0) {
        // Обчислення b^2 - 2xy + 4 / (b^2 - xy)
        if (b * b - x * y != 0) {
            a = b * b - 2 * x * y + 4.0 / (b * b - x * y);
            printf("Результат a = %.2f\n", a);
        } else {
            printf("Помилка: ділення на нуль.\n");
        }
    } 
    else {
        printf("Для значення b = %d функція не визначена.\n", b);
    }

    return 0;
}
