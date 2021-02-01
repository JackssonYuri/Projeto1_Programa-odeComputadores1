# Projeto1_Programa-odeComputadores1
Primeiro projeto de programação de computadores 01 do ifb campus taguatinga. Aqui apresento meu código.

Instituto Federal de Educação, Ciência e Tecnologia de Brasília
Campus Taguatinga
Aluno: Jacksson Yuri de Amorim Wasterloô
Curso: ABI - Computação


No projeto usei:
#define MIN_MATRIZ 10 //para dimensão mínima do caça-palavras

#define MAX_MATRIZ 81 // dimensão máxima do caça-palavras

#define MAX_PALAVRA 10 //tamanho máximo das palavras

adicionei a biblioteca #include <locale.h> para imprimir as acentuações.

O projeto começa com a impressão na tela de ''Bem vindo'', a partir disso, o programa pede para o usuário digitar a dimensão do caça palavras, sendo salvo como (n), e sendo(10<=n<=80), caso seja maior ou menor que isso o programa finaliza. 
Caso digite a dimensão certa, o programa pede para o usuário digitar as letras da matriz, e depois que seja digitada quantas palavras o usuário deseja caçar nela, que é de até 10, caso seja mais o programa finaliza, foi colocado num if para isso dar certo. Então o usuário deve digitar as palavras encontradas e o programa começa a caçar essa palavra no caça-palavras, dessa forma foi criado um laço for que me volta os índices das palavras digitadas e um if para imprimir na tela se a palavra foi ou não encontrada.

int: 
n = dimensão da matriz
m = tamanho da palavra
i = contador
j = contador
a = palavra
z = contador
encontrada = caso tenha sido encontrada = 0, não encontrada: encontrada = 1

char:
matriz[MIN_MATRIZ][MAX_MATRIZ]
palavra[MIN_PALAVRA]
