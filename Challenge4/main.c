#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,t,x;
    int max ;

    printf("entrer la taille du tableau: ");
    scanf("%d",&t);
    int T[t];
    for (i=0; i<t;i++){
        printf("Entrer la valeur de T[%d]: ",i);
        scanf("%d",&T[i]);

    }
max = T[0];
for (i=0; i<t;i++){
      if (T[i]> max)
            max = T[i];

    }

      printf ( "le maximum est: %d",max);
    return 0;
}
