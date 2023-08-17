#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct time elapsed_time(struct time t1, struct time t2);

int main(void) {
    struct time time1, time2, elapsed;

    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

    elapsed = elapsed_time(time1, time2);

    printf("%i:%i:%i", elapsed.hour, elapsed.minutes, elapsed.seconds);
}

struct time elapsed_time(struct time t1, struct time t2) {

}
