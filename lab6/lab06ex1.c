#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

int main(){

    char resp[30],a[26] = "Ooooh Grande Tela Preta!!!",b[30], lixo[20];
    int i;
    
    printf("Pergunte o que quiser para a Grande Tela Preta.\n");
    
    fflush(stdin);
    
    for (i=0; i<25; i++){
        resp[i] = getch();
        if(resp[i] != '.')  putchar(a[i]);
        else{
            resp[i+1]='\0';
            for(i=i; i<25; i++){
                lixo[i]=getch();
                putchar(a[i]);
            }
        }
    }
    
    gets(b);
    puts(resp);
    
    system("PAUSE");
    return 0;
}


