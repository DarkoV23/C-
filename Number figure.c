#include <stdio.h>

/*
This program draws a number figure that looks like this for n=5:

11111
12222
12333
12222
11111

And this for n=8:

11111111
12222222
12333333
12344444
12344444
12333333
12222222
11111111
*/

int main(){
    int n;
    scanf("%d", &n);
    int num=1;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j==0){
                num=1;}
            else if((i==j || i>j) && ((i+j)<=(n-1))){
                    num++;}
            printf("%d", num);}
    printf("\n");}
    return 0;
}
