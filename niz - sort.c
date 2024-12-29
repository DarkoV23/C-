#include <stdio.h>

/*
A simple program that sorts a given array of numbers.
*/


void bubble_sort(int niz[], int duzina){
    int i, j, pom;
    for (i=0;i<duzina;i++){
        for (j=0; j<duzina-1-i;j++){
            if (niz[j]>niz[j+1]){
                pom=niz[j];
                niz[j]=niz[j+1];
                niz[j+1]=pom;}}}}
int main(){
    int n;
    printf("Unesi broj clanova:\n");
    scanf("%d", &n);
    int niz[n];
    printf("Unesi elemente:\n");
        for (int i=0;i<n;i++){
        scanf("%d", &niz[i]);}
    printf("Sortirani niz: \n");
    bubble_sort(niz,n);
    for (int i=0;i<n;i++){
        printf("%d ",niz[i]);
    }
    return 0;
}
