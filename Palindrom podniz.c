#include<stdio.h>

/// Program ispisuje najduzi palindromski podniz unetog niza.

int isPalindrom(int niz[], int velicina){
    int polovina=velicina/2;
    for (int i=0;i<polovina;i++){
        if (niz[i]!=niz[velicina-1-i]){
            return 0;}}
    return 1;}

int main(){
    int vel;
    printf("Unesi velicinu:\n");
    scanf("%d", &vel);
    int niz[vel];
    printf("Unesi elemente:\n");
    for (int i=0;i<vel;i++){
        scanf("%d", &niz[i]);}
    int brojac=0;
    int start;
    int duzina_rezultata=0;
    int max_duzina=1;
    for (int i=0;i<vel;i++){
        for (int j=i;j<vel;j++){
            int duzina_podniza=j-i+1;
            int podniz[duzina_podniza];
            for (int k=0;k<duzina_podniza;k++){
                podniz[k]=niz[i+k];}
            if (isPalindrom(podniz,duzina_podniza) && duzina_podniza>duzina_rezultata){
                start=i;
                duzina_rezultata=duzina_podniza;}}}
    int rezultat[duzina_rezultata];
    for(int i=0;i<duzina_rezultata;i++){
        rezultat[i]=niz[start+i];}
    for(int i=0;i<duzina_rezultata;i++){
        printf("%d ", rezultat[i]);}
    return 0;}
