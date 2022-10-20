#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char A[80],B[30],C[20], ques;
	char nome[100];
	float ano;
	
	printf("nome da disciplina: Algoritmo e Programação");
	printf("\nnome do professor: Joyce Siqueira");
	printf("\nnome completo do aluno: Thales Sousa Lima");
	printf("\nmatrícula: UC22200145");
	printf("\ncurso: CIÊNCIA DA COMPUTAÇÃO");
	printf("\nlink do repositório do GitHub: https://github.com/Tutusvip/AVALIACAO_Algoritmos.git");
	printf("\nqual software foi utilizado: DevC++");

	fflush(stdin);	
	
	printf("\n\nEscolha a Questão:");
	scanf("%c", &ques);
	fflush(stdin);
	
	switch(ques){
		case 'A': printf("Um Colégio está com um novo projeto, no qual deseja ensinar matemática aos alunos do ensino médio, por meio de algoritmos de resolução de formulas. Assim, você foi contratado para escrever um algoritmo que receba os valores de ‘a’ e ‘b’, ou seja, os valores dos catetos oposto e adjacente, respectivamente, de um triângulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de Pitágoras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da vírgula"); break;
		case 'B': printf("O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre 1900 e 2022. "); break;
		case 'C': printf("A Secretaria de Estado de Obras do Distrito Federal está preocupada com os atrasos das obras que estão sendo realizadas e pediu que fosse feito um levantamento sobre a real situação de cada uma. Por isso, você foi contratado para fazer um algoritmo que receba: o nome da obra, o mês de início e o mês de término, e código que identifica a sua situação, conforme a tabela abaixo:"); break;
		
		default: printf("Opcao invalida");		
	}
	
	printf("\n\nDigite seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Digite o ano de nascimento: ");
	scanf("%f", &ano);
	
	if (1900>2022){
		if (ano/4 == 100==0){
		printf("É um ano bissexto");
		}else{
		printf("Não é um ano bissexto");
		}
		if (ano/4/100/100){
		printf("É um ano ano bissexto");
	}
	}else{
	printf("Ano invalido!!!");	
	}
	
	return(0);
}
