#include <stdio.h>
#include <math.h>

int check_prime(int num){
    for(int a=2; a<=(num/2); a++){
        if(num%a==0){
            return 0;}}
    return 1;}

int main(){             ///This program finds the K-th prime number (user enters the parameter)
    int K;
    scanf("%d", &K);
    int counter=1;
    int a=2;
    while (counter!=K){
        a++;
        if (check_prime(a)){
            counter++;}}
    printf("%d\n", a);
    return 0;
}
