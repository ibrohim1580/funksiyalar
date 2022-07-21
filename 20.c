#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void triangle(a,b){
    int k ;
    k=a+b;
    printf("perimetri: %d", k);
}
int main (){
    int a,b;
    printf("a ni kiriting ");
    scanf("%d", &a);

    printf("b ni kiriting ");
    scanf("%d", &b);

    triangle(a,b);
    return 0;
}

