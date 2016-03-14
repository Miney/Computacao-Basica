/*Exercício 2: Escreva uma função recursiva que calcula e retorna a xn. O
usuário deve informar valores para x e n.*/

#include <stdio.h>
#include <stdlib.h>

int fpow (int, int);

int main(){
    int n, x;
    printf("Insira o numero x:");
    scanf("%d", &x);
    printf("Insira o numero n, para x^n:");
    scanf("%d", &n);
    printf("%d^%d=%d\n",x, n, fpow(x, n));
    system("PAUSE");
    return 0;
}

int fpow (int x, int n){
    if (n == 0) return 1;
    if (n == 1) return x;
    else return x*fpow(x,n-1);
}

//Yasmin Pimentel 110144341
