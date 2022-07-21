#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void ShiftRight(int A, int B, int C){
    A=B;
    B=C;
    C=A;
    printf("A= %d, B=%d, C=%d", A, B, C);
}
int main(){
    int A,B,C;
    printf("A ni kiriting ");
    scanf("%d", &A);    

    printf("B ni kiriting ");
    scanf("%d", &B);

    printf("C ni kiriting ");
    scanf("%d", &C);

    ShiftRight (A,B,C);
    return 0;
}