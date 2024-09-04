#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n];
    for (i=0; i<n;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }

    printf("Elements impairs du tableau:\n");
    for (i = 0; i < n; i++) {
        if (T[i] % 2 != 0) {
            printf("%d ", T[i]);
        }
    }

    return 0;
}
