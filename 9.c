#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void AddLeftDigit (int son, int raqam){
    int k;
    k=raqam*100+son;
    printf("k= %d/n", k);
}
int main (){
    int son,raqam;
    printf("sonni kiriting: \n");
    scanf("%d", &son);

    printf("raqamni kiriting: \n");
    scanf("%d", &raqam);

    AddLeftDigit (son,raqam);

    return 0;
}