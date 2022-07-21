#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Sortlnc(int A, int B, int C){
    if(A<B && B<C){
        printf("Eng Kichigi: %d\n", A);
        printf("O`rtanchasi: %d\n", B);
        printf("kattasi: %d\n", C);
    }else if(B<A && A<C){
        printf("Eng kichigi: %d\n", B);
        printf("O`rtanchasi: %d\n", A);
        printf("kattasi: %d\n", C);
    }else if(C<A && A<B){
        printf("Eng kichigi: %d\n", C);
        printf("O`rtanchasi: %d\n", A);
        printf("kattasi: %d\n", B);
    }else if(A<C && C<B){
        printf("Eng kichigi: %d\n", A);
        printf("O`rtanchasi: %d\n", C);
        printf("kattasi: %d\n", B);
    }else if(B<C && C<A){
        printf("Eng kichigi: %d\n", B);
        printf("O`rtanchasi: %d\n", C);
        printf("kattasi: %d\n", A);
    }else if(C<B && C<A){
        printf("Eng kichigi: %d\n", C);
        printf("O`rtanchasi: %d\n", B);
        printf("kattasi: %d\n", A);
    }
}
int main (){
        int A,B,C;
        printf("A ni kiriting ");
        scanf("%d", &A);

        printf("B ni kiriting ");
        scanf("%d", &B);

        printf("C ni kiriting ");
        scanf("%d", &C);

        Sortlnc(A,B,C);
        return 0;       

    }
