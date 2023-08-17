#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int N(struct date d);
int f(int year, int month);
int g(int month);
int day_of_the_week(int N);

int main(void) {
    struct date d;
    int n, day;

    scanf("%i/%i/%i", &d.month, &d.day, &d.year);

    n = N(d);

    day = day_of_the_week(n);

    switch (day) {
        case 0: 
            printf("Sunday \n");
            break;
        case 1:
            printf("Monday \n");
            break;
        case 2:
            printf("Tuesday \n");
            break;
        case 3:
            printf("Wednsday \n");
            break;
        case 4:
            printf("Thursday \n");
            break;
        case 5:
            printf("Friday \n");
            break;
        case 6:
            printf("Saturday \n");
            break;
        default:
            printf("Invalid Date \n");
            break;
    }
    
}

int N(struct date d) {
    return 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) /5 + d.day;
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


int day_of_the_week(int N) {
    return (N - 621049) % 7;
}
