/*
Задане ціле число d з відрізка [1; 7] задає день тижня починаючи з понеділка (1 - «понеділок», 2 - «вівторок» і т. д.).
Скласти програму, яка за введеним числом d виведе відповідну назву дня
тижня.
*/

#include <stdio.h>

int main() {
    int d = 0;

    scanf("%d", &d);

    switch(d) {
        case 1: {
            printf("Понеділок");
            break;
        }
        case 2: {
            printf("Вівторок");
            break;
        }
        case 3: {
            printf("Середа");
            break;
        }
        case 4: {
            printf("Четвер");
            break;
        }
        case 5: {
            printf("Пʼятниця");
            break;
        }
        case 6: {
            printf("Субота");
            break;
        }
        case 7: {
            printf("Неділя");
            break;
        }
        default: {
            printf("Значення d повинно бути більше нуля, але менше за 8!");
        }
    }

    return 0;
}
