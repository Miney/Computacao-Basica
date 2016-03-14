/*Problema 4: Baixe o plano de ensino da disciplina e, baseando-se
nos critérios de avaliação, escreva um programa em C que calcule
a média final do aluno.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1, p2, p3;
    
    float lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8, lab9, lab10;
    
    float lis1, lis2, lis3;
    
    float mprova, mlista, mlab, mprat, mfinal;
    
    int i;
        
    for(i=1; i<4; i++) {
             printf("Insira a nota da prova %d:", i);
             if (1==i) {
                scanf("%f", &p1);
             } else if (2==i) {
                scanf("%f", &p2);
             } else if (3==i) {
                scanf("%f", &p3);
             }
             getchar();
    }
    
    for(i=1; i<11; i++) {
             printf("Insira a nota do laboratorio %d:",i);
             if(i==1) {
               scanf("%f", &lab1);
             } else if (2==i) {
                scanf("%f", &lab2);
             } else if (3==i) {
                scanf("%f", &lab3);             
             } else if (4==i) {
                scanf("%f", &lab4);
             } else if (5==i) {
                scanf("%f", &lab5);
             } else if (6==i) {
                scanf("%f", &lab6);
             } else if (7==i) {
                scanf("%f", &lab7);
             } else if (8==i) {
                scanf("%f", &lab8);
             } else if (9==i) {
                scanf("%f", &lab9);
             } else if (10==i) {
                scanf("%f", &lab10);
             }
             getchar();
    }

    for(i=1; i<4; i++){
             printf("Insira a nota da lista %d:", i);
             if (1==i) {
                scanf("%f", &lis1);
             } else if (2==i) {
                scanf("%f", &lis2);
             } else if (3==i) {
                scanf("%f", &lis3);
             }
             getchar();
    }



    mprova=(p1+(2*p2)+(3*p3))/6;
    mlab=(lab1+lab2+lab3+lab4+lab5+lab6+lab7+lab8+lab9+lab10)/10;
    mlista=3/((1/lis1)+(1/lis2)+(1/lis3));
    mprat=2/((1/mlista)+(1/mlab));
    mfinal=((3*mprat)+(7*mprova))/10;

    printf("Sua media final sera: %.2f \n", mfinal);
    
    printf("Mencao final: ");
    if (9<=mfinal) {
       printf("SS\n");
    } else if (7<=mfinal) {
       printf("MS\n");
    } else if (5<=mfinal) {
       printf("MM\n");
    } else if (3<=mfinal) {
       printf("MI\n");
    } else {
       printf("II\n");
    }

    system("PAUSE");

    return 0;
}

