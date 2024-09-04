#include <stdio.h>

int main() {
    int n, i;
    float somme = 0;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n];
    for (i=0; i<n;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
        somme += T[i];
    }


    float moyenne = somme / n;
    printf("La moyenne des elements du tableau est: %.2f\n", moyenne);

    return 0;
}
