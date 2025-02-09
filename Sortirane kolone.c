#include <stdio.h>


void zameni (int *a, int *b){
    int pom=*b;
    *b=*a;
    *a=pom;}

int main(){
    int m,n;
    printf("Unesi dimenzije:\n");
    scanf("%d%d", &m, &n);
    int matrica[m][n];
    int transponovana[n][m];
    printf("Unesi elemente:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrica[i][j]);}}
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                transponovana[j][i]=matrica[i][j];}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                printf("%d ", transponovana[i][j]);}
                printf("\n");}


    return 0;
}
