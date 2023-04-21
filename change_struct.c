#include <stdio.h>

struct Person {
    char name[64];
    int age;
};

void updateStruct(struct Person *p, int age) {
    p->age = age;
}

void printStruct(struct Person *st) {
    printf("here: %d\n",st->age);
}

int main(int argc, char **argv) {
    struct Person lowlevellearning;
    printStruct(&lowlevellearning);

    updateStruct(&lowlevellearning, 100);
    printStruct(&lowlevellearning);

}
