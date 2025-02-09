#include<stdio.h>
#include <string.h>

/// Program ispisuje koliko puta se drugi string pojavljuje u prvom.

void zameni (char *a, char *b){
    int pom;
    pom=*b;
    *b=*a;
    *a=pom;
}

int main(){
    char s[1000];
    printf("Unesite string:\n");
    gets(s);
    int n=strlen(s);
    int pola=n/2;
    char pom;
    for (int i=0;i<pola;i++){
           zameni(&s[i], &s[n-1-i]);}
    puts(s);


    return 0;}
