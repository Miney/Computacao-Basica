#include <stdio.h>
#include <stdlib.h>

int main(){

    float  conta1, conta2, conta3;
    int conta, op, verificador; //switch entre operaçoes
    float valordep;
    
    verificador=-1;
    
    printf("********************************\n");
    printf("       PORTAL DO SISBANCO\n");
    printf("********************************\n\n");
    printf("Digite sua conta ou 0 para sair:\n");
    
    while(-1==verificador){
        scanf("%d", &verificador);
        
        switch(verificador){
          case 0:
              return 0;
          case 1:
              conta=1;
              break;
          case 2:
              conta=2;
              break;
          case 3:
              conta=3;
              break;
          default:
              printf("Conta invalida! Tente novamente!\nDigite sua conta:");
              verificador=-1;
         }
    }
     
     
     printf("***********************************\n");
     printf("OPERACOES\n");
     printf("***********************************\n\n");
     printf("(1)Deposito\n");
     printf("(0)Para sair\n\n");
     printf("***********************************\n");
     printf("Escolha uma opcao:");
      
    
    scanf("%d", &op); 
    
    switch(op){
        case 0:
                  ;
        case 1:
             printf("Valor depositado:");
             scanf("%d", &valordep);
             getchar();
             conta+=valordep;
             printf("%d  %f",conta, valordep);
             printf("Deposito efetuado com sucesso!");
             break;            
        default:
             printf("Operacao invalida! Tente novamente!\nEscolha uma opcao:");
             scanf("%d", &op);
    }
    
    
    
    
    
system("PAUSE");
return 0;
}
