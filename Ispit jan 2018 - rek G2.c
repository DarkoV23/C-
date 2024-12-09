#include<stdio.h>
#include<math.h>

/*
Solution for this problem:

https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/14_ispitJan18PrviZadatakGrupa2
*/

int fib(int n){
    int broj=1;
    int b=1;
    int a;
    int brojac=1;
    if (n==0 || n==1){
        return 1;}
    while(brojac<n){
            a=broj;
            broj+=b;
            b=a;
            brojac++;}
    return broj;}

double rek(int i, int n){
    if (i==n-1){
        return sqrt(fib(i)/((2*(n-i))*pow(10,n-i-1)));}
    else
        return sqrt(fib(i)/((2*(n-i))*pow(10,n-i-1))+rek(i+1,n));}

double iter(int n){
    double rez=0;
    for (int i=n-1;i>=0;i--){
        if(i==n-1){
            rez=sqrt(fib(i)/(2*(n-i)*pow(10,n-i-1)));}
        else{
            rez=sqrt(fib(i)/(2*(n-i)*pow(10,n-i-1))+rez);}}
    return rez;}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", rek(0,n), iter(n));
    return 0;}
