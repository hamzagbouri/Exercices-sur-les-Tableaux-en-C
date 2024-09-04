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

    for (i = 0; i < n / 2; i++) {
        int temp = T[i];
        T[i] = T[n - 1 - i];
        T[n - 1 - i] = temp;
    }

    printf("Tableau inversé:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
