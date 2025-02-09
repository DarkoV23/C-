#include<stdio.h>
#include <string.h>

/// Program ispisuje sve podstringove datog teksta, sortirane po velicini.

int main(){
    char c[1000];
    printf("Unesite tekst:\n");
    gets(c);
    int n=strlen(c);
    for(int i=n-1; i>=0;i--){
        c[2*i+1]=c[i];
        c[2*i]=c[i];}
    c[2*n]=0;
    puts(c);
    return 0;}
