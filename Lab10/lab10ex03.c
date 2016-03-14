//lab10ex03 busca binaria recursiva

void *busca (int, int *, int, int);

int main(){
    int n, i, v[10],r;
    
    for(i=0;i<10;i++){
        printf("Insira o valor %d do vetor (deve estar ordenado):", i);
        scanf("%d", &v[i]);
    }
    printf("Insira o numero a ser buscado:");
    scanf("%d", &n);
    
    busca(n, v, 0, 9);
    system("PAUSE");
    return 0;
}

void *busca (int n, int *v, int inicio, int fim){
    int c; //meio do vetor
    c=(inicio+fim)/2;
    if(n==v[c]){
       printf("Elemento foi encontrado.\n");
       return;
    }
    else if(v[c]<n) busca(n, v, c+1, fim);
    else if(v[c]>n) busca(n, v, inicio, c-1);
}

    

//Yasmin Pimentel 110144341
