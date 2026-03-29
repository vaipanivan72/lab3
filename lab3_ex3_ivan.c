#include <stdio.h>

int main() {
    int episode;

    printf("Введіть номер серії (1-13): ");
    scanf("%d", &episode);

    switch (episode) {
        case 1:
            printf("Назва: Pilot\nДата: 03.09.2008\n");
            break;
        case 2:
            printf("Назва: Seeds\nДата: 10.09.2008\n");
            break;
        case 3:
            printf("Назва: Fun Town\nДата: 17.09.2008\n");
            break;
        case 4:
            printf("Назва: Patch Over\nДата: 24.09.2008\n");
            break;
        case 5:
            printf("Назва: Giving Back\nДата: 01.10.2008\n");
            break;
        case 6:
            printf("Назва: AK-51\nДата: 08.10.2008\n");
            break;
        case 7:
            printf("Назва: Old Bones\nДата: 15.10.2008\n");
            break;
        case 8:
            printf("Назва: The Pull\nДата: 22.10.2008\n");
            break;
        case 9:
            printf("Назва: Hell Followed\nДата: 29.10.2008\n");
            break;
        case 10:
            printf("Назва: Better Half\nДата: 05.11.2008\n");
            break;
        case 11:
            printf("Назва: Capybara\nДата: 12.11.2008\n");
            break;
        case 12:
            printf("Назва: The Sleep of Babies\nДата: 19.11.2008\n");
            break;
        case 13:
            printf("Назва: The Revelator\nДата: 26.11.2008\n");
            break;
        default:
            printf("Невірний номер серії!\n");
    }

    return 0;
}
