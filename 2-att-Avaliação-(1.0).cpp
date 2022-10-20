/*Deve ser construído um menu, com switch case, que dê acesso as 3 questões. Ou seja,
para executar a questão A, digite ‘A’; para questão B, digite ‘B’ e; para a questão C, digite ‘C’. Caso a
opção desejada não seja válida, imprimir “Opcao invalida”.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char A[80],B[30],C[20], ques;
	
	printf("Escolha a Questão:");
	scanf("%c", &ques);
	
	switch(ques){
		case 'A': printf("Um Colégio está com um novo projeto, no qual deseja ensinar matemática aos alunos do ensino médio, por meio de algoritmos de resolução de formulas. Assim, você foi contratado para escrever um algoritmo que receba os valores de ‘a’ e ‘b’, ou seja, os valores dos catetos oposto e adjacente, respectivamente, de um triângulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de Pitágoras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da vírgula"); break;
		case 'B': printf("O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre 1900 e 2022. "); break;
		case 'C': printf("A Secretaria de Estado de Obras do Distrito Federal está preocupada com os atrasos das obras que estão sendo realizadas e pediu que fosse feito um levantamento sobre a real situação de cada uma. Por isso, você foi contratado para fazer um algoritmo que receba: o nome da obra, o mês de início e o mês de término, e código que identifica a sua situação, conforme a tabela abaixo:"); break;
		
		default: printf("Opcao invalida");		
	}

	return(0);
}
