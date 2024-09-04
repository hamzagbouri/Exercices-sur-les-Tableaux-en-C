#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,t;
    printf("entrer la taille du tableau: ");
    scanf("%d",&t);
    int T[t];
    for (i=0; i<t;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }
        printf("Voici le tableau: \n");

      for (i=0; i<t;i++){
        printf("La valeur de T[%d]: %d \n",i,T[i]);

    }
    return 0;
}
