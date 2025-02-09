#include<stdio.h>

/// Program racuna zbir elemenata iznad sporedne dijagonale.

int main () {
   int n;
   printf("Unesi dimenzije matrice:\n");
   scanf("%d", &n);
   int matrica[n][n];
   int zbir=0;
   printf("Unesi elemente matrice: \n");
   for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrica[i][j]);}   }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<n-1){
                zbir+=matrica[i][j];}}}
    printf("%d", zbir);
    return 0;
}
