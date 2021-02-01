#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MIN_MATRIZ 10
#define MAX_MATRIZ 81
#define MAX_PALAVRA 10

int main()
{
    setlocale(LC_ALL, "Portuguese"); // para acentua��o.
    char matriz[MIN_MATRIZ][MAX_MATRIZ];
    char palavra[MAX_PALAVRA], inverso[MAX_PALAVRA];

    int encontrada, n, m, i, j, a, t; //n = dimens�o da matriz; m = palavras a serem encontradas; p = palavras digitadas.

    moduloLeitura(palavra, matriz, encontrada, n, m, i, j, a, t);

}

void moduloLeitura(char matriz[MIN_MATRIZ][MAX_MATRIZ], char palavra[1][MAX_PALAVRA]){
    int encontrada; // N�O = 0; SIM = 1.
    int n, m, i, j, a, t;
      //n = dimens�o; m = qntd de palavras; i = contador 1; j = contador 2; pal = palavras na matriz; c = coluna; l = linha.

        printf("\t\tJOGO DE CA�A-PALAVRAS\n\n\tBEM VINDO AO JOGO DE CA�A-PALAVRAS!\n\n");
        printf("PARA COME�AR O JOGO VOC� DEVE DIGITAR O TAMANHO DA MATRIZ.\n*****Obs: A matriz deve ter dimens�o entre 10 e 80.*****\n");
        printf("DIGITE A DIMENS�O DA MATRIZ: \n");
        scanf("%d", &n);

        if(n>=10 && n <= 80){
            printf("AGORA VOC� DEVE DIGITAR AS LETRAS DA MATRIZ!\n");
            printf("DIGITE AS LETRAS DA MATRIZ:\n");

            for (i = 0; i < n; i++)
                scanf("%s", matriz[i]); //Armazena as letras na matriz.

            printf("AGORA VOC� DEVE DIGITAR O N�MERO DE PALAVRAS QUE DESEJA:\n*****Obs: At� 10.*****\n");
            scanf("%d", &m); //Armaze a quantidade de palavras que o usu�rio deseja encontrar na matriz.


            printf("DIGITE AS PALAVRAS ENCONTRADAS:\n");




            for (i = 0; i < m; i++)
                scanf("%s", palavra[i]); //Armazena as palavras que ser�o buscadas na matriz.

                printf("RESULTADO:\n");

                for (a = 0; a < m ; a++)
                {
                    encontrada = 0; // n�o encontrada.

                    for(i = 0; i < n; i++) //para linha
                    {
                        for(j = 0; j < n; j++) //para coluna
                        {
                        if(palavra[a][0] == matriz[i][j]) // la�o para encontrar as palavras digitadas na matriz.
                            {
                                if(palavra[a][1] == matriz[i - 1][j])
                                {
                                    encontrada = 1;

                                    for(t = 0; t < strlen(palavra[a]); t++)
                                        if( palavra[a][t] != matriz[i - t][j])
                                            encontrada = 0;

                                        if (encontrada)
                                            break;


                                }
                                if (palavra[a][1] == matriz[i + 1][j]) //Se a segunda letra for encontrada abaixo (Sul)
                                {
                                    encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i + t][j])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i][j + 1]) //Se a segunda letra for encontrada a direita (Leste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i][j + t])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i][j - 1]) //Se a segunda letra for encontrada a esquerda (Oeste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i][j - t])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i - 1][j + 1]) //Se a segunda letra for encontrada acima-direita (Nordeste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i - t][j + t])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i - 1][j - 1]) //Se a segunda letra for encontrada acima-esquerda (Noroeste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i - t][j - t])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i + 1][j + 1]) //Se a segunda letra for encontrada abaixo-direita (Sudeste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i + t][j + t])
                                encontrada = 0;

                        if (encontrada)
                            break;
                    }

                    if (palavra[a][1] == matriz[i + 1][j - 1]) //Se a segunda letra for encontrada abaixo-esquerda (Sudoeste)
                    {
                        encontrada = 1;

                        for (t = 0; t < strlen(palavra[a]); t++)
                            if (palavra[a][t] != matriz[i + t][j - t])
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

                                    for ( i = 0; i < n; i++){
                                            for( j = 0; j < n; j++){
                                            printf("%d ", matriz[i][j]);
                                            }
                                    }

                                    }else{
                                    printf("%s N�O FOI ENCONTRADA\n", palavra[a]);
                                    }
                }


                }//1�IF

                else { //else do primeiro if, caso a matriz esteja menor que 10 e maior que 80.
                    printf("DIMENS�O INCORRETA!\n");

                }
                //else

                }//DO MAIN





















