#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int T[n];
    for (i=0; i<n;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (T[i] > T[j]) {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }

    printf("Tableau trié en ordre croissant:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
