#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,t,somme;
    somme = 0;
    printf("entrer la taille du tableau: ");
    scanf("%d",&t);
    int T[t];
    for (i=0; i<t;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }

      for (i=0; i<t;i++){
       somme += T[i];

    }
    printf("la somme des elements du tableau est: %d",somme);
    return 0;
}
