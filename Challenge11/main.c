#include <stdio.h>

int main() {
    int n, i, a, n;
    int cmp = 0;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n];
      for (i=0; i<n;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }

    printf("Entrez la valeur à remplacer: ");
    scanf("%d", &a);
    printf("Entrez la nouvelle valeur: ");
    scanf("%d", &n);

 for (i = 0; i < n; i++) {
        if (T[i] == a) {
           cmp +=cmp;
        }
    }
if (cmp == 0 ){
printf("valuer non trouvé"):
}
else {
    for (i = 0; i < n; i++) {
        if (T[i] == a) {
            T[i] = n;
        }
    }
}

    printf("Tableau après remplacement:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
