#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char A[80],B[30],C[20], ques;
	char nome[100];
	float ano;
	
	printf("nome da disciplina: Algoritmo e Programa��o");
	printf("\nnome do professor: Joyce Siqueira");
	printf("\nnome completo do aluno: Thales Sousa Lima");
	printf("\nmatr�cula: UC22200145");
	printf("\ncurso: CI�NCIA DA COMPUTA��O");
	printf("\nlink do reposit�rio do GitHub: https://github.com/Tutusvip/AVALIACAO_Algoritmos.git");
	printf("\nqual software foi utilizado: DevC++");

	fflush(stdin);	
	
	printf("\n\nEscolha a Quest�o:");
	scanf("%c", &ques);
	fflush(stdin);
	
	switch(ques){
		case 'A': printf("Um Col�gio est� com um novo projeto, no qual deseja ensinar matem�tica aos alunos do ensino m�dio, por meio de algoritmos de resolu��o de formulas. Assim, voc� foi contratado para escrever um algoritmo que receba os valores de �a� e �b�, ou seja, os valores dos catetos oposto e adjacente, respectivamente, de um tri�ngulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de Pit�goras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da v�rgula"); break;
		case 'B': printf("O usu�rio deseja verificar se seu ano de nascimento � um ano bissexto ou n�o. Para tal, � preciso solicitar o nome do usu�rio e ano de nascimento, garantindo que seja um ano v�lido, ou seja, entre 1900 e 2022. "); break;
		case 'C': printf("A Secretaria de Estado de Obras do Distrito Federal est� preocupada com os atrasos das obras que est�o sendo realizadas e pediu que fosse feito um levantamento sobre a real situa��o de cada uma. Por isso, voc� foi contratado para fazer um algoritmo que receba: o nome da obra, o m�s de in�cio e o m�s de t�rmino, e c�digo que identifica a sua situa��o, conforme a tabela abaixo:"); break;
		
		default: printf("Opcao invalida");		
	}
	
	printf("\n\nDigite seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Digite o ano de nascimento: ");
	scanf("%f", &ano);
	
	if (1900>2022){
		if (ano/4 == 100==0){
		printf("� um ano bissexto");
		}else{
		printf("N�o � um ano bissexto");
		}
		if (ano/4/100/100){
		printf("� um ano ano bissexto");
	}
	}else{
	printf("Ano invalido!!!");	
	}
	
	return(0);
}
