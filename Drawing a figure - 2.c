#include <stdio.h>

/*
This program prints a figure like this for n=5:

<<<<<
->>>-
--<--
->>>-
<<<<<

*/

int main(){
    int n;
    scanf("%d", &n);
    char sign;
    for (int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if((i%2)==0){
                sign='<';}
            else if((i%2==1)){
                sign='>';}
            if ((j>i && i+j>(n-1)) || (i>j && i+j<(n-1))){
                printf("-");}
            else {
                printf("%c", sign);}}
    printf("\n");}
    return 0;}
