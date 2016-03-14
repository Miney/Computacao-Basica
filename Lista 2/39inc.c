#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[40], palavra2[40];
    int i, j, k;
    
    printf("Insira a palavra:");
    gets (palavra);
    
    j=strlen(palavra);
    for(i=0;i<strlen(palavra);i++){
        palavra2[j]=palavra[i];
        j--;
        printf("palavra: %c e palavra 2 %c\n", palavra[i], palavra2[j]);
    }
    
    k= strcmp(palavra, palavra2);
    if(k=0) printf("E palindromo.\n\n");
    else printf("Nao e palindromo.\n\n");
    
/*    if(strlen(palavra)!=strlen(palavra2)) printf("Nao sao palindromos.\n");
    else{
        j==strlen(palavra); 
        for(i=0;i<strlen(palavra);i++){
            if(palavra[i]==palavra2[j]) p++;
            j--;
        }
    }
    if(p==strlen(palavra)) printf("Sao palindromos.\n");
    else printf("Nao sao palindromos.\n");*/
    system("PAUSE");
    return 0;

}
