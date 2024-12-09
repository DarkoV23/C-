#include<stdio.h>
#include<math.h>

/*
Solution for this problem:
https://petlja.org/sr-Latn-RS/biblioteka/r/problemi/uvod-u-programiranje/12_drugiKolokvijum18DrugiZadatakDrugaGrupa

*/
double iter(int n){
    double rez=0;
    for (int i=n;i>0;i--){
        if(i==n && i%2==0){
            rez=1.0;}
        else if(i==n && i%2==1){
            rez=(double)(10*n+1-9*(i/2));}
        else if(i%2==1){
            rez=(10*n+1-9*(i/2))+(double)(2*n-2*(i-1))/rez;}
        else
            rez=1+(2*n-2.0*(i-1))/rez;}
    return rez;}

double rek(int i, int n){
    if (i==n && i%2==0){
        return 1;}
    else if(i==n && i%2==1){
        return (10*n+1-9*(i/2));}
    else if (i%2==1){
        return (10*n+1-9*(i/2))+(2*n-(i-1)*2.0)/rek(i+1,n);}
    else if (i%2==0){
        return 1+(2*n-2.0*(i-1))/rek(i+1,n);}}


int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n%lf", rek(1,n), iter(n));
    return 0;
}
