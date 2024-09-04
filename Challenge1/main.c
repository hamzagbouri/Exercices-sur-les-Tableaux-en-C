
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[]={1,2,3,4};
    int taille = sizeof(T)/sizeof(T[0]);
 for (int i=0; i<taille; i++){
        printf("T[%d] = %d\n",i,T[i]);
    }
    return 0;
}

