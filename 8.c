#include <stdio.h>
#include <stdbool.h>
#include <math.h>


void AddRightDigit(int son, int raqam){
    int k;
    k=son*10+raqam;
    printf("k= %d/n", k);
}
int main (){
    int son,raqam;
    printf("sonni kiriting: ");
    scanf("%d", &son);

    printf("raqamni kiriting: ");
    scanf("%d", &raqam);

    AddRightDigit (son, raqam) ;

    return 0;
}