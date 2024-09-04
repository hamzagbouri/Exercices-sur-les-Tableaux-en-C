#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Entrez le nombre d'elements du premier tableau: ");
    scanf("%d", &n1);

    int T1[n1];
    printf("Entrez les elements du premier tableau:\n");
      for (i=0; i<n;i++){
        printf("Entrer la valeur de T1[%d]: ",i);
        scanf("%d",&T1[i]);
    }

    printf("Entrez le nombre d'elements du deuxième tableau: ");
    scanf("%d", &n2);

    int T2[n2];
    printf("Entrez les elements du deuxième tableau:\n");
      for (i=0; i<n;i++){
        printf("Entrer la valeur de T2[%d]: ",i);
        scanf("%d",&T2[i]);
    }

    int T3[n1 + n2];


    for (i = 0; i < n1; i++) {
        T3[i] = T1[i];
    }

    for (j = 0; j < n2; j++) {
        T3[i + j] = T2[j];
    }

    printf("Tableau fusionné:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", T3[i]);
    }

    return 0;
}
