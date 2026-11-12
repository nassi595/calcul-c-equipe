#include <stdio.h>

float moyenne(int a, int b) {
    return (a + b) / 2.0f;
}

int main() {
    printf("Projet collaboratif\n");
    printf("Moyenne : %.2f\n", moyenne(10, 15));
    return 0;
}