#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double PowerA3(double son){
    return son*son;
}

int main (){
    double A=2, B=5, C=4;
    int D=2, E=3;

    printf("Natija: %lf.\n", PowerA3(A));
    printf("Natija: %lf.\n", PowerA3(B));
    printf("Natija: %lf.\n", PowerA3(C));

    printf("Natija: %lf.\n", PowerA3(D));
    printf("Natija: %lf.\n", PowerA3(E));

    return 0;

}