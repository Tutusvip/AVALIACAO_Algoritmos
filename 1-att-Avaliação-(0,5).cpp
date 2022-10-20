/*Escreva um printf com as seguintes informações: nome da disciplina (Algoritmo e
Programação), nome do professor (Joyce Siqueira), nome completo do aluno, matrícula, curso, link do
repositório do GitHub e qual software foi utilizado: DevC++ ou VSCode*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("nome da disciplina: Algoritmo e Programação");
	printf("\nnome do professor: Joyce Siqueira");
	printf("\nnome completo do aluno: Thales Sousa Lima");
	printf("\nmatrícula: UC22200145");
	printf("\ncurso: CIÊNCIA DA COMPUTAÇÃO");
	printf("\nlink do repositório do GitHub: https://github.com/Tutusvip/AVALIACAO_Algoritmos.git");
	printf("\nqual software foi utilizado: DevC++");

	return(0);
}
