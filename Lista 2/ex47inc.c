//ex47
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vetcarros{
    char marca[15], cor[10];
    int ano;
    float preco;
};

int main(){
    int i, compara, op, anob;
    float precob;
    char marcab[15], corb[10];
    
    struct vetcarros carros[10];
    
    for(i=0;i<3;i++){
        printf("Insira a marca do carro %d:", i);
        gets(carros[i].marca);
        printf("Insira a cor do carro %d:", i);
        gets(carros[i].cor);
        printf("Insira o ano do carro %d:", i);
        scanf("%d", &carros[i].ano);
        printf("Insira o preco do carro %d:", i);
        scanf("%f", &carros[i].preco);
        getchar();
    }
    
    printf("(1)Para pesquisar carros ate um determinado preco.\n");
    printf("(2)Para informacoes sobre carros de determinada marca.\n");
    printf("(3)Para buscar um carro com determinados parametros.\n");
    printf("Escolha uma operacao:");
    scanf("%d", &op);
    
    switch(op){
        case 1:
             printf("Insira o preco alvo:");
             scanf("%f", &precob);
             for(i=0;i<10;i++){
                 if(carros[i].preco<=precob){
                     printf("Marca:");
                     puts(carros[i].marca);
                     printf("Cor:");
                     puts(carros[i].cor);
                     printf("Ano:%d\n", carros[i].ano);
                 }
             }
             break;
        case 2:
             printf("Insira a marca a ser pesquisada:");
             gets(marcab);
             for(i=0;i<10;i++){
                 compara= strcmp(carros[i].marca, marcab);
                 if(compara==0){
                     printf("Preco: %f\n", carros[i].preco);
                     printf("Cor:");
                     puts(carros[i].cor);
                     printf("Ano:%d\n", carros[i].ano);
                 }
             }
             break;
        case 3:
             printf("Insira a marca desejada:");
             gets(marcab);
             printf("Insira a cor desejada:");
             gets(corb);
             printf("Insira o ano desejado:");
             scanf("%d", &anob);
             for(i=0;i<10;i++){
                 compara = strcmp(carros[i].marca, marcab);
                 if(compara==0){
                     compara = strcmp(carros[i].cor, corb);
                     if(compara==0){
                         if(carros[i].ano==anob){
                             printf("Preco do carro: %f", carros[i].preco);
                         }
                     }
                 }
             }
             break;
             
    }
    
    system("PAUSE");
    return 0;
}
