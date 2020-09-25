/*
    ******************************************************************************** 
                    Arthur Rocha, Fabricio De Biasi e Rafael Aparecido
                                        25/09/2020                             
    ********************************************************************************"
*/


/*
    ******************************************************************************** 
                            Camada da lógica da aplicação                            
    ********************************************************************************"
*/

//INCLUINDO BIBLIOTECAS

#include<stdio.h>
#include<stdlib.h>

//DECLARAÇÃO DO STRUCT PARA AS PEÇAS

typedef struct Peca
{
    int esq;
    int dir;
} Peca [28];

Peca pecas;

printf("\n");
//Criação de uma mesa:
nPedras;
printf("\n Computador: Essas São as pedras da mesa\n ");
if(nPedras>-1){
				printf("\n Computador: Essa é a proxima pedra a ser comprada: ");
				mostraTopoPilha(nPedras);
				printf("\n");
			}
else
				printf("\n Computador - Não existe mais pedras para compra \n");

			//imprime a mão dos jogadores
			for(i=0 ; i<numeroJogadores ; i++){
				printf("\n Computador - Essas são as peças do jogador %d \n ",i+1);
				imprimeListaSimples(J[i]);
			}
			printf("\n\n Computador - aperte enter para ver a próxima rodada");
			getchar();
			clear();



//Declaração para struct de distribuição de peças

typedef struct tPedra 
{
    int pedraBuffer;
} tPedra;




// Case 2: Embaralhar as peças do domino 

Peca [] embaralhar (Peca[] origin)
{
    Peca[28] embaralhado;
    int[28] crivo;
    int i,j, index;
    for(i=0;i<28;i++)
    {
        crivo[i]=0;
    }
    for(j=0;j<28;j++)
    {
        index=geraAleatorio();
        while(crivo[index]==1)
        {
            index=geraAleatorio();
        }
        embaralhado[j]=origin[index];
        crivo[index]=1;
    }
    return embaralhado;
}

void imprimiPeca(Peca[] baralho)
{
    int i;
    int tamanho = (sizeof(baralho)/sizeof(Peca));
    for(i = 0; i<tamanho;i++)
    {
        printf("[%d|%d]", baralho[i].esq,baralho[i].dir);
    }
}

// Case 1: Montar as peças do dominó com a numeração correta do jogo 

Peca[] montar()
{
    peca nova;
    Peca[28] baralho;
    int i,j;
    int count = 0;
    for(i=0;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        {
            nova.esq = i;
            nova.dir= j;
            baralho[count]= nova;
        }
    }
    return baralho;
}


