#include <stdio.h>
#include <stdlib.h>

int main(){

    float massa, altura,IMC;
    char sexo;    
    
    printf("Insira o seu sexo <F ou M>");
    scanf("%c", &sexo);
    IMC=massa/(altura*altura);
    printf("Insira sua massa em kilogramas:");
    scanf("%f", &massa);
    getchar();
    printf("Insira sua altura em metros:");
    scanf("%f", &altura);
    getchar();
    
    
    if(sexo=='f'||'F'){
        if(IMC<=19.1)printf("Seu IMC indica que voce esta abaixo do peso.\n");
        else if(IMC<=25.8)printf("Seu IMC indica que voce esta no peso normal.\n");
        else if(IMC<=27.3)printf("Seu IMC indica que voce esta marginalmente acima do peso.\n");
        else if(IMC<=32.3)printf("Seu IMC indica que voce esta acima do peso ideal.\n"); 
        else if(IMC>32.3)printf("Seu IMC indica que voce esta obeso.\n");
    }
    
    else if(sexo=='m'||'M'){
        if(IMC<=20.7)printf("Seu IMC indica que voce esta abaixo do peso.\n");
        else if(IMC<=26.4)printf("Seu IMC indica que voce esta no peso normal.\n");
        else if(IMC<=27.8)printf("Seu IMC indica que voce esta marginalmente acima do peso.\n");
        else if(IMC<=31.1)printf("Seu IMC indica que voce esta acima do peso ideal.\n"); 
        else if(IMC>31.1)printf("Seu IMC indica que voce esta obeso.\n");
    }
    

system("PAUSE");
return 0;
}
