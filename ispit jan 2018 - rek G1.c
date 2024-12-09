#include<stdio.h>
#include<math.h>

/*
Solution for this problem:

https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/13_ispitJan18PrviZadatakGrupa1

*/


int fib(int n){
    if (n==0 || n==1)
        return 1;
    int brojac=1;
    int a, broj=1;
    int b=1;
    while(brojac<n){
        a=broj;
        broj+=b;
        b=a;
        brojac++;}
    return broj;}

double rek(int i, int n){
    if (i==(n-1))
        return fib(i);
    else
        return fib(i)+(2*n-2.0*i)*pow(10,i)/rek(i+1,n);}

double iter(int n){
    double rez;
    for (int i=n-1;i>=0;i--){
        if (i==n-1)
            rez=fib(i);
        else
            rez=fib(i)+(2*n-2.0*i)*pow(10,i)/rez;}
    return rez;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", rek(0,n), iter(n));
    return 0;}
