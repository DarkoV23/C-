#include<stdio.h>

///     This program gives the biggest subarray
///     from a given array (at least one must be positive).


int main(){
    int vel;
    printf("Unesi velicinu niza:\n");
    scanf("%d", &vel);
    int niz[vel];
    int zbir=0;
    int max=0;
    int pozitivan=0;
    printf("Unesi elemente:\n");
    for (int i=0;i<vel;i++){
        scanf("%d", &niz[i]);}
    for(int i=0;i<vel;i++){
        for(int j=i;j<vel;j++){
            zbir+=niz[j];
            if (niz[j]>0){
                pozitivan++;}
            if (zbir>max && pozitivan){
                max=zbir;}}
        zbir=0;}
    if(max==0){
        printf("Nijedan broj nije veci od nule.\n");}
    else {
    printf("Maksimum je %d\n", max);}
    return 0;}
