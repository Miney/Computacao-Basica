#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int dia, mes, ano;
    
    
    printf("Insira o dia:");
    scanf("%d", &dia);
    getchar();
    
    printf("Insira o mes:");
    scanf("%d", &mes);
    getchar();
    
    printf("Insira o ano:");
    scanf("%d", &ano);
    getchar();
    
    if(ano%400==0) ano=1;
    
    if(ano%4==0 && ano%100!=0) ano=1;
    
    else ano=2;
    
    switch(ano){
               case 1:
                    if(mes=2){
                       if(dia>29)printf("Data invalida!\n");
                    }
                    break;
               case 2:
                    if(mes=2){
                        if(dia>28)printf("Data invalida!\n");
                    }
                    break;
    }
    
               

system ("PAUSE");
return 0;
   
}    
