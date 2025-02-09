#include <stdio.h>

/// Ova funkcija proverava da li je jedna matrica prisutna unutar druge.


int main(){
    int M1, N1, M2, N2;
    int odsustvo=0;
    printf("Unesi dimenzije prve matrice:\n");
    scanf("%d %d", &M1, &N1);
    int matrica[M1][N1];
    printf("Unesi elemente prve matrice:\n");
    for (int i=0;i<M1;i++){
        for(int j=0;j<N1;j++){
            scanf("%d", &matrica[i][j]);}}
    printf("Unesi dimenzije druge matrice:\n");
    scanf("%d %d", &M2, &N2);
    printf("Unesi elemente druge matrice:\n");
    int druga_matrica[M2][N2];
    for (int i=0;i<M2;i++){
        for(int j=0;j<N2;j++){
            scanf("%d", &druga_matrica[i][j]);}}
    /// Proveravamo ima li druge matrice u prvoj:
     for (int i=0;i<M1;i++){
        for(int j=0;j<N1;j++){
            if(i+M2<=M1 && j+N2<=N1){
                for(int k=0;k<M2;k++){
                    for(int m=0;m<N2;m++){
                        if (matrica[i+k][j+m]!=druga_matrica[k][m]){
                            odsustvo=1;
                            break;}
                    }
                if (odsustvo==1){
                    break;}

                }
            if(odsustvo==0){
                printf("DA");
                return 0;}
            odsustvo=0;
            }

            }
            }
    printf("NE");
    return 0;
}
