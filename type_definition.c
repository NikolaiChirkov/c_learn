#include <stdio.h>

typedef enum {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    satureday,
    sunday
} WEEKDAY;

int main(void) {
    WEEKDAY day = monday;

    if (day == monday) {
        printf("It's monday\n");
    } else {
        printf("It isn't monday\n");
    }
}