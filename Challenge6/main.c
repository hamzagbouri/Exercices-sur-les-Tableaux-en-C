#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,m;
    printf("entrer la taille du tableau: ");
    scanf("%d",&t);
    int T[t];
    for (i=0; i<t;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);
    }
printf("entrer le facteur: ");
scanf("%d",&m);
      for (i=0; i<t;i++){
       T[i] *= m;

    }
    printf("le tableau multiplié est: \n");
     for (i=0; i<t;i++){
        printf("La nouvelle valeur de T[%d]: %d \n",i,T[i]);

    }
    return 0;
}
