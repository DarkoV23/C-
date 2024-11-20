#include <stdio.h>
                    ///This program prints three-digit numbers with the property that they have a
                    ///hundreds digit less than 6, an even tens digit and a units digit greater than the tens digit.

int main(){
    for(int i=100; i<1000; i++){
        if (((i/100)<6) && ((i%100/10)%2==0) && ((i%10)>(i%100/10))){
            printf("%d ", i);
        }
    }
    return 0;}
