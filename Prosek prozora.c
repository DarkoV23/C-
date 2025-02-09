#include<stdio.h>

/// Resenje problema "prosek prozora":
/// https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/08_pokretni_prosek

int main(){
    int vel, K;
    printf("Unesi velicinu niza i prozora:\n");
    scanf("%d %d", &vel, &K);
    int niz[vel];
    int rez_niz[vel];
    int element;
    int broj=0;
    printf("Unesi elemente:\n");
    for (int i=0;i<vel;i++){
        scanf("%d", &niz[i]);}
    for(int i=0;i<vel;i++){
        if(i+1<K){
            rez_niz[i]=niz[i];}
        else{
            for(int j=0;j<K;j++){
                broj+=niz[i-j];}
                broj=broj/K;
            rez_niz[i]=broj;}
        broj=0;}
    for (int i=0;i<vel;i++){
        printf("%d ", rez_niz[i]);}
    return 0;}
