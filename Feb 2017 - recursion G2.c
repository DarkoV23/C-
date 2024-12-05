#include<stdio.h>
#include<math.h>

/*
Solving this problem in both recursive and iterative way:

https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/10_ispit_feb17_2

*/


int fib(int n){
    int a=1;
    int broj=1;
    int b;
    int brojac=1;
    if (n==0 || n==1){
        return 1;}
    while (brojac<n){
        b=broj;
        broj=a+broj;
        a=b;
        brojac++;}
    return broj;}

double funkcija(int i, int n){
    if (i==(n-1) && i%2==1){
        return sqrt(fib(i));}
    else if(i==(n-1) && i%2==0){
        return sqrt(fib(i)/(pow(2,n-i)));}
    else if(i%2==1){
        return sqrt(fib(i)+funkcija(i+1,n));}
    else if(i%2==0)
        return sqrt(fib(i)/pow(2,n-i)+funkcija(i+1,n));}

double iter(int n){
    double rez=0;
    for (int i=(n-1);i>=0;i--){
        if (i%2==1){
            rez=sqrt(fib(i)+rez);}
        else if(i%2==0){
            rez=sqrt(fib(i)/pow(2,n-i)+rez);}}
    return rez;}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", funkcija(0,n), iter(n));
    return 0;}
