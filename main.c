#include <stdio.h>
printf("Message de l'etudiant B\n");

float moyenne(int a, int b) {
    return (a + b) / 2.0f;
}

int produit(int a, int b) {
    return a * b;
}

int main() {
    printf("Projet collaboratif\n");
    printf("Moyenne : %.2f\n", moyenne(10, 15));
    printf("Produit : %d\n", produit(3, 4));
    return 0;
}