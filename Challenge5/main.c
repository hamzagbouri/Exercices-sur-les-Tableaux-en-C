#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,x;
    int min ;

    printf("entrer la taille du tableau: ");
    scanf("%d",&t);
    int T[t];
    for (i=0; i<t;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);

    }
min = T[0];
for (i=0; i<t;i++){
      if (T[i]< min)
            min = T[i];

    }

      printf ( "le minimum est: %d",min);
    return 0;
}
