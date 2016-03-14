#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, candM=0, candF=0, idadeHxp=0, nHxp=0, nHmqc=0, nMmtcxp=0, iminimaMxp=1000;
    int inscricao, idade;
    char sexo, xp;
    
    printf("Insira as informacoes dos candidatos.\nPara o ultimo candidato defina o numero de inscricao como zero.\n\n");
    
    do{
        printf("Insira o numero de inscricao do candidato:");
        scanf("%d", &inscricao);
        printf("Insira o sexo do candidato <m ou f>:");
        scanf("%c", &sexo);
        getchar();
        if(sexo=='m'||'M') candM++;
        else if(sexo=='f'||'F') candF++;     
        
        printf("Insira a idade do candidato:");
        scanf("%d", &idade);
        getchar();
        if(sexo=='m'||'M'){
                if(idade>=45)nHmqc++;
        }
        
        printf("O candidato ja tem experiencia no servico?<s ou n>:");
        scanf("%c", &xp);
        getchar();
        if(xp=='s'||'S'&&sexo=='m'||'M'){
            idadeHxp+=idade;
            nHxp++;
        }
        else if(xp=='s'||'S'&&sexo=='f'||'f'){
            if(idade<35)nMmtcxp++;
            if(idade<iminimaMxp) iminimaMxp=idade;
        }
    }while(inscricao!=0);
    
    
    printf("Candidatos do sexo masculino:%d\n", candM);
    printf("Candidatas do sexo feminino:%d\n", candF);
    printf("Idade media dos homens que ja tem experiencia no servico:%f\n", idadeHxp/nHxp);
    printf("Porcentagem de homens com mais de 45 anos entre o total de homens: %.2f\n", (nHmqc/candM)*100);
    printf("Numero de mulheres com menos de 35 anos com experiencia no servico:%d\n", nMmtcxp);
    printf("Idade minima entre as mulheres com experiencia no servico:%d\n",iminimaMxp);
    
    system("PAUSE");
    return 0;
}
