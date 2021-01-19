#include <stdio.h>

#define VALUE 1
#define PI 3.14
#define NAME "Flavio"

#define Power(x) (x * x)

const int DEBUG = 0;

int main(void) {
#if DEBUG == 0
    printf("It isn't debugging \n");
    printf("%u\n", Power(4));

    #ifdef VALUE
        printf("Value defined");
    #endif

    #ifndef VALUE
        printf("Value not defined");
    #endif
#else
    printf("It's debugging \n");
#endif
}