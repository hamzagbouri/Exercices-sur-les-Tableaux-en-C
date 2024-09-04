#include <stdio.h>

int main() {
    int n, i, r, f= 0;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n];
     for (i=0; i<n;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }

    printf("Entrez l'element à rechercher: ");
    scanf("%d", &r);


    for (i = 0; i < n; i++) {
        if (T[i] == r) {
            f= 1;
            break;
        }
    }

    if (f!= 0) {
        printf("L'element %d est présent dans le tableau.\n", r);
    } else {
        printf("L'element %d n'est pas présent dans le tableau.\n", r);
    }

    return 0;
}
