#include <stdio.h>
#include <stdlib.h>

struct Funcionarios{
	char nome[100];
	char cargo[100];
	char departamento[100];
	float salario;
	char data_ad[10];
};

int main(){
	struct Funcionarios *dados;
	int i, N;
	float media_sal=0;
    
    printf("Insira o numero de funcionarios:");
	scanf("%d", &N);
	getchar();
    dados = (struct dados *) calloc(N , sizeof(struct Funcionarios));
	
	for(i=0;i<N;i++){
        printf("Insira o nome do funcionario %d:", i+1);
        gets(dados[i].nome);
        
        printf("Insira o cargo do funcionario %d:", i+1);
        gets(dados[i].cargo);
        
        printf("Insira o departamento do funcionario %d:", i+1);
        gets(dados[i].departamento);
        
        printf("Insira o salario do funcionario %d:", i+1);
        scanf("%f", &dados[i].salario);
        getchar();
        
        media_sal=(media_sal+dados[i].salario)/(i+1);
        
        printf("Insira a data da contratação, dd/mm/aaaa:");
        gets(dados[i].data_ad);
    }
	
	printf("%.2f\n", media_sal);
	for(i=0;i<N;i++){
        if(dados[i].salario>media_sal) puts(dados[i].nome);    
    }
	
    system("PAUSE");
	return 0;
}
