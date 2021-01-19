#include <stdio.h>

// struct person {
//     int age;
//     char *name;
// } people[20];

// struct person flavio = { 37, "Flavio" };

typedef struct {
    int age;
    char *name;
} PERSON;

PERSON flavio = { 37, "Flavio" };


int main(void) {
    printf("%s, age %d \n", flavio.name, flavio.age);
}