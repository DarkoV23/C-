#include <stdio.h>

int check_prime(int num){  /// the function checks if a number is prime
    for(int a=2;a<=(num/2);a++){
        if (num%a==0){
            return 0;}}
    return 1;}

int check_div(int num){   ///the function checks whether the number is divisible by a prime number other than 2,3 or 5
    for (int a=2; a<=num;a++){
        if (check_prime(num) && num!=2 && num!=3 && num!=5){
            return 0;}
        if (num%a==0){
            if (check_prime(a)){
                if (a!=2 && a!=3 && a!=5){
                    return 0;}}}}
    return 1;}

int main(){
    int number;
    scanf("%d", &number);
    for (int i=1; i<=number;i++){
        if (check_div(i)){
            printf("%d ", i);}}
    return 0;}
