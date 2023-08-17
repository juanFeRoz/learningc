#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int N(struct date d);
int f(int year, int month);
int g(int month);

int main(void) {
    struct date d1, d2;
    int days_between, N1, N2;

    scanf("%i/%i/%i", &d1.month, &d1.day, &d1.year);
    scanf("%i/%i/%i", &d2.month, &d2.day, &d2.year);
    
    N1 = N(d1);
    N2 = N(d2);

    days_between = N2 - N1;

    printf("%i \n", days_between);
}

int N(struct date d) {
    return 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day;
}

int f(int year, int month) {
    if (month <= 2)
        return year - 1;
    else
        return year;
}

int g(int month) {
    if (month <= 2)
        return month + 13;
    else
        return month + 1;
}
