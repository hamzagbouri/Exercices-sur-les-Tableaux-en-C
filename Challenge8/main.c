#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n], T1[n];
            printf("Entrer les valeurs du table original: \n");

  for (i=0; i<n;i++){
        printf("T[%d]: ",i);
        scanf("%d",&T[i]);
    }

    for (i = 0; i < n; i++) {
        T1[i] = T[i];
    }

    printf("Tableau original:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    printf("\nTableau copié:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T1[i]);
    }

    return 0;
}
