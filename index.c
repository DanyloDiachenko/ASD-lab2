/*
Задане ціле число d з відрізка [1; 7] задає день тижня починаючи з понеділка (1 - «понеділок», 2 - «вівторок» і т. д.).
Скласти програму, яка за введеним числом d виведе відповідну назву дня
тижня.
*/

#include <stdio.h>

int main() {
    int d = 1;

    if(d == 1) {
        printf("Понеділок");
        return 0;
    } else if(d == 2) {
        printf("Вівторок");
        return 0;
    } else if(d == 3) {
        printf("Середа");
        return 0;
    } else if(d == 4) {
        printf("Четвер");
        return 0;
    } else if(d == 5) {
        printf("Пʼятниця");
        return 0;
    } else if(d == 6) {
        printf("Субота");
        return 0;
    } else if(d == 7) {
        printf("Неділя");
        return 0;
    } else {
        printf("Значення d повинно бути більше нуля, але менше за 8!");
        return -1;
    }

    return 0;
}
