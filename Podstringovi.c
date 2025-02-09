#include<stdio.h>
#include <string.h>

/// Program ispisuje sve podstringove datog teksta.

int main(){
    char c[1000];
    printf("Unesi tekst: \n");
    gets(c);
    for(int duz=1;duz<=strlen(c);duz++){
        for(int i=0;i<strlen(c);i++){
            char d[1000];
            d[0]='\0';
            int brojac=0;
            for(int j=i; j<strlen(c);j++){
                d[brojac++]=c[j];
                d[brojac]=0;
                if(strlen(d)==duz){
                    puts(d);}
            }
        }
    }

    return 0;}
