#include<stdio.h>
#include<math.h>


/*
Solution to this problem:

https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/11_drugiKolokvijum2018PrviZadatakPrvaGrupa
*/

double rek(int i, int n){
    if(i==n-1 && i%2==1){
        return sqrt(1.0/2);}
    else if(i==n-1 && i%2==0){
        return sqrt((n*10+1-9*(i/2))/2.0);}
    else if(i%2==1){
        return sqrt(1.0/(2*(n-i))+rek(i+1,n));}
    else if(i%2==0){
        return sqrt((10*n+1-9*(i/2))*1.0/(2*(n-i))+rek(i+1,n));}}

double iter (int n){
    double rez=0;
    for (int i=n;i>0;i--){
        if(i==n && i%2==0){
            rez=sqrt(1.0/2);}
        else if(i==n && i%2==1){
            rez=sqrt((10*n+1-9*((i-1)/2))*1.0/2);}
        else if(i%2==0){
            rez=sqrt(1.0/(2*n-(i-1)*2)+rez);}
        else if(i%2==1){
            rez=sqrt((10*n+1-9*((i-1)/2))*1.0/(2*n-(2*(i-1)))+rez);}}
    return rez;}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", rek(0,n), iter(n));
    return 0;}
