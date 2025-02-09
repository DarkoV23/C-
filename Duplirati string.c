#include<stdio.h>
#include <string.h>

/// Program svaki karakter unetog teksta ispisuje dva puta.

int main(){
    char s[1000];
    char t[1000];
    printf("Unesite prvi string:\n");
    gets(s);
    printf("Unesite drugi string: \n");
    gets(t);
    int brojac=0;
    int flag=0;
    for (int i=0;i<strlen(s);i++){
        for(int j=0;j<strlen(t);j++){
            if(t[j]!=s[i+j]){
                printf("t[%d]!=s[%d]\n", j, i+j);
                flag=1;
                break;}}
            if(flag==0){
                printf("brojac++\n");
                brojac++;}
            flag=0;
        }


    printf("%d", brojac);
    return 0;}
