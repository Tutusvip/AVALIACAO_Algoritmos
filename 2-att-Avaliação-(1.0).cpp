/*Deve ser constru�do um menu, com switch case, que d� acesso as 3 quest�es. Ou seja,
para executar a quest�o A, digite �A�; para quest�o B, digite �B� e; para a quest�o C, digite �C�. Caso a
op��o desejada n�o seja v�lida, imprimir �Opcao invalida�.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char A[80],B[30],C[20], ques;
	
	printf("Escolha a Quest�o:");
	scanf("%c", &ques);
	
	switch(ques){
		case 'A': printf("Um Col�gio est� com um novo projeto, no qual deseja ensinar matem�tica aos alunos do ensino m�dio, por meio de algoritmos de resolu��o de formulas. Assim, voc� foi contratado para escrever um algoritmo que receba os valores de �a� e �b�, ou seja, os valores dos catetos oposto e adjacente, respectivamente, de um tri�ngulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de Pit�goras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da v�rgula"); break;
		case 'B': printf("O usu�rio deseja verificar se seu ano de nascimento � um ano bissexto ou n�o. Para tal, � preciso solicitar o nome do usu�rio e ano de nascimento, garantindo que seja um ano v�lido, ou seja, entre 1900 e 2022. "); break;
		case 'C': printf("A Secretaria de Estado de Obras do Distrito Federal est� preocupada com os atrasos das obras que est�o sendo realizadas e pediu que fosse feito um levantamento sobre a real situa��o de cada uma. Por isso, voc� foi contratado para fazer um algoritmo que receba: o nome da obra, o m�s de in�cio e o m�s de t�rmino, e c�digo que identifica a sua situa��o, conforme a tabela abaixo:"); break;
		
		default: printf("Opcao invalida");		
	}

	return(0);
}
