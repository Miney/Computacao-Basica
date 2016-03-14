//lab02ex09
#include <stdio.h>
#include <stdlib.h>

int calc_sad (int *, int *);

struct movimento{
int i, j;
};

int main(int argc, char *argv[]){
    
    FILE *f;
    
    struct movimento mov[25];
    int **f0, **f1, x, y,i,j, linha, coluna, lin, col, menor, mi, mj, varmov;
    int **sad_aux, V1[4], V2[4], l, m, n, o, p;
    
    //zera struct mov
    for(i=0;i<25;i++){
        mov[i].i=0;
        mov[i].j=0;
    }
    
    //abre o arquivo de texto
    f=fopen(argv[1], "r");
    
    //le o arquivo de texto
    fscanf(f, "%d", &x);
    fscanf(f, "%d", &y);
    
    //aloca memoria pra f0, f1 e sad_aux
    f0 = (int **)calloc (x, sizeof(int *));
    for(l=0;l<x;l++) f0[i]=(int *)calloc (y, sizeof(int)); 
    
    f1 = (int **)calloc (x, sizeof(int *));
    for(l=0;l<x;l++) f1[i]=(int *)calloc (y, sizeof(int)); 
    
    sad_aux = (int **)calloc (x-1, sizeof(int *));
    for(l=0;l<x-1;l++) sad_aux[i]=(int *)calloc (y-1, sizeof(int)); 
    
    //preenche f0 e f1
    for(l=0;l<x;l++){
        for(m=1;m<y;m++){
            fscanf(f,"%d",&f0[l][m]);
        }
    }
    
    for(l=0;l<x;l++){
        for(m=0;m<y;m++){
        fscanf(f,"%d",&f1[l][m]);
        }
    }

    //fecha o arquivo    
    fclose(f);
    
    //preenche sad aux
    varmov=0;
    for(linha=0;linha<10;linha++){
        for(coluna=0;coluna<10;col++){  
            p=0;
            for(n=linha;n<linha+2;n++){
                for(o=coluna;o<coluna+2;o++){
                    V2[p]=f1[n][o];
                    p++;
                }
            }    
        
            for(lin=0;lin<x-1;lin++){
                for(col=0;col<x-1;col++){
                    p=0;
                    for(n=lin;n<lin+2;n++){
                        for(o=col;o<col+2;o++){
                            V1[p]=f0[n][o];
                            p++;
                        }
                    }
                    sad_aux[lin][col]=calc_sad(V1, V2);
                }
            }
    
            //varredura da menor e salvar na struct
            for(n=0;n<x-1;n++){
                for(o=0;o<x-1;o++){
                    if(n==0&&o==0){
                        menor=sad_aux[n][o];
                        mi=n;
                        mj=o;
                    }
                    else if(sad_aux[n][o]<menor){
                        menor=sad_aux[n][o];
                        mi=n;
                        mj=o;
                    }    
                }
            }
        
            mov[varmov].i=mi;
            mov[varmov].j=mj;
            linha++;
            varmov++;
        }
        coluna++;
    }
    for(i=0;i<25;i++){
        printf("\ti[%d]\tj[%d]\n", i, mov[i].i, mov[i].j);
    }
    system ("PAUSE");
    return 0;
}


//funcao SAD
int calc_sad (int *v1, int *v2){
    int SAD=0, k;
    for(k=0;k<3;k++){
        SAD+=v1[k]-v2[k];
    } 
    return SAD;
}
 


//Yasmin Pimentel 110144341
