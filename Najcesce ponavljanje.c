#include<stdio.h>
#include<stdlib.h>

/// This program writes the number that repeats itself the most
/// in a given array and how many times it repeats itself.
/// If there are two numbers that repeat themselves the same number of times,
/// the program writes the smaller one.

int main(){
    int vel;
    printf("Unesi velicinu niza:\n");
    scanf("%d", &vel);
    int niz[vel];
    printf("Unesi elemente:\n");
    for (int i=0;i<vel;i++){
        scanf("%d", &niz[i]);}
    int brojac=0;
    int max=-1;
    int broj=0;
    for(int i=0;i<vel;i++){
        for(int j=0;j<vel;j++){
            if (niz[j]==niz[i]){
                brojac++;}
            if (brojac>max){
                max=brojac;
                broj=niz[j];}
            if (brojac==max){
                if (niz[j]<broj){
                    broj=niz[j];}}}
        brojac=0;}
    printf("%d %d", broj, max);
    return 0;}
