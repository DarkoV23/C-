#include<stdio.h>
#include <string.h>


int main(){
    char c[1000];
    printf("Unesi tekst: \n");
    gets(c);
    for(int i=0;i<strlen(c);i++){
        char z[1000];
        int brojac=0;
        for(int j=i;j<strlen(c);j++){
            z[brojac]=c[j];
            brojac++;
            z[brojac]='\0';
            puts(z);
            }
}
    return 0;}
