#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MIN_MATRIZ 10
#define MAX_MATRIZ 81
#define MAX_PALAVRA 10

int main()
{
    setlocale(LC_ALL, "Portuguese"); // para acentuação.
    char matriz[MIN_MATRIZ][MAX_MATRIZ];
    char palavra[MAX_PALAVRA], inverso[MAX_PALAVRA];
    int encontrada, n, m, i, j, a, z; //n = dimensão da matriz; m = palavras a serem encontradas; p = palavras digitadas.
    moduloLeitura(palavra, matriz, encontrada, n, m, i, j, a, z);

}

void moduloLeitura(char matriz[MIN_MATRIZ][MAX_MATRIZ], char palavra[1][MAX_PALAVRA]){
    int encontrada; // NÃO = 0; SIM = 1.
    int n, m, i, j, a, z;
      //n = dimensão; m = qntd de palavras; i = contador 1; j = contador 2; pal = palavras na matriz; c = coluna; l = linha.

        printf("\t\tJOGO DE CAÇA-PALAVRAS\n\n\tBEM VINDO AO JOGO DE CAÇA-PALAVRAS!\n\n");
        printf("PARA COMEÇAR O JOGO VOCÊ DEVE DIGITAR O TAMANHO DA MATRIZ.\n*****Obs: A matriz deve ter dimensão entre 10 e 80.*****\n");
        printf("DIGITE A DIMENSÃO DA MATRIZ: \n");
        scanf("%d", &n);

        if(n>=10 && n <= 80){
            printf("AGORA VOCÊ DEVE DIGITAR AS LETRAS DA MATRIZ!\n");
            printf("DIGITE AS LETRAS DA MATRIZ:\n");

            for (i = 0; i < n; i++)
                scanf("%s", matriz[i]); //Armazena as letras na matriz.

            printf("AGORA VOCÊ DEVE DIGITAR O NÚMERO DE PALAVRAS QUE DESEJA:\n*****Obs: Até 10.*****\n");
            scanf("%d", &m); //Armaze a quantidade de palavras que o usuário deseja encontrar na matriz.

            printf("DIGITE AS PALAVRAS ENCONTRADAS:\n");

            for (i = 0; i < m; i++)
                scanf("%s", palavra[i]); //Armazena as palavras que serão buscadas na matriz.

                for (a = 0; a < m ; a++)
                {
                    encontrada = 0; // não encontrada.
                    for(i = 0; i < n; i++) //para linha
                    {
                        for(j = 0; j < n; j++) //para coluna
                        {
                        if(palavra[a][0] == matriz[i][j]) // laço para encontrar as palavras digitadas na matriz.
                            {
                                if(palavra[a][1] == matriz[i - 1][j]) // caso a segunda letra tenha sido encontrada
                                {
                                    encontrada = 1;

                                    for(z = 0; z < strlen(palavra[a]); z++)
                                        if( palavra[a][z] != matriz[i - z][j])
                                            encontrada = 0;

                                        if (encontrada)
                                            break;


                                }
                                if (palavra[a][1] == matriz[i + 1][j])
                                {
                                    encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i + z][j])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i][j + 1])
                                {
                            encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i][j + z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i][j - 1])
                                {
                                encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i][j - z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i - 1][j + 1])
                                {
                                encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i - z][j + z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i - 1][j - 1])
                                {
                            encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i - z][j - z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i + 1][j + 1])
                                {
                                encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i + z][j + z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }

                                if (palavra[a][1] == matriz[i + 1][j - 1])
                                {
                                encontrada = 1;

                            for (z = 0; z < strlen(palavra[a]); z++)
                                if (palavra[a][z] != matriz[i + z][j - z])
                                encontrada = 0;

                                if (encontrada)
                                break;
                                }
                            }
                        }

                                if (encontrada)
                                break;
                                }

                                if(encontrada){
                                    printf("%s FOI ENCONTRADA\n", palavra[a]);

                                    for ( i = 0; i < n; i++){ //laço para poder imprimir os índices de cada palavra caso tenha sido encontrada
                                            for( j = 0; j < n; j++){
                                            printf("%d ", matriz[i][j]);
                                            }
                                    }

                                    }else{
                                    printf("%s NÃO FOI ENCONTRADA\n", palavra[a]); //caso não seja encontrada
                                    }
                                }
                        }//1ªIF

                        else { //else do primeiro if, caso a matriz esteja menor que 10 e maior que 80.
                            printf("DIMENSÃO INCORRETA!\n");
                        }//else
                    }//DO MAIN





















