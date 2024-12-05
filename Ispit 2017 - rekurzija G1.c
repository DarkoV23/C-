#include<stdio.h>
#include<math.h>

/*

Solution to this problem:
https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/09_ispit_jan17_1

*/

int snowball(int n){
    int razlika=1;
    int broj=1;
    if (n==1){
        return 1;}
    for (int brojac=1; brojac<n;brojac++){
            broj+=razlika;
            razlika++;}
    return broj;}

double fun(int i, int n){
    if (i==n){
        return snowball(n);}
    else
        return (snowball(i)+(2*n+1-i)/fun(i+1,n));}

double fun_i(int n){
    double suma=0;
    double desni=0;
    for (int i=n;i>0;i--){
        if (i!=n){
            desni=(2*n+1-i)/suma;}
        suma=snowball(i)+desni;}
    return suma;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", fun(1,n), fun_i(n));
    return 0;
}
