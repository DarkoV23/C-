#include <stdio.h>
#include <math.h>

/*
The program is supposed to draw the following figure if a user enters a number n=5:
                    ///\\
                    \///\
                    \\///
                    \\\//
                    /\\\/

For n=8:
                    ///\\\//
                    /\\\///\
                    \\///\\\
                    ///\\\//
                    /\\\///\
                    \\///\\\
                    ///\\\//
                    /\\\///\
*/

int main(){
    int counter=0;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (counter==6){
                counter=0;}
            if (counter<3){
                printf("/");
                counter++;}
            else if(counter>=3 && counter<6){
                printf("\\");
                counter++;}}
    printf("\n");}
    return 0;}
