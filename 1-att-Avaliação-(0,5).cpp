/*Escreva um printf com as seguintes informa��es: nome da disciplina (Algoritmo e
Programa��o), nome do professor (Joyce Siqueira), nome completo do aluno, matr�cula, curso, link do
reposit�rio do GitHub e qual software foi utilizado: DevC++ ou VSCode*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("nome da disciplina: Algoritmo e Programa��o");
	printf("\nnome do professor: Joyce Siqueira");
	printf("\nnome completo do aluno: Thales Sousa Lima");
	printf("\nmatr�cula: UC22200145");
	printf("\ncurso: CI�NCIA DA COMPUTA��O");
	printf("\nlink do reposit�rio do GitHub: https://github.com/Tutusvip/AVALIACAO_Algoritmos.git");
	printf("\nqual software foi utilizado: DevC++");

	return(0);
}
