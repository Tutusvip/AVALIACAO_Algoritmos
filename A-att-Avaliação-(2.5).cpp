/*Um Col�gio est� com um novo projeto, no qual deseja ensinar matem�tica aos alunos do
ensino m�dio, por meio de algoritmos de resolu��o de formulas. Assim, voc� foi contratado para escrever
um algoritmo que receba os valores de �a� e �b�, ou seja, os valores dos catetos oposto e adjacente,
respectivamente, de um tri�ngulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de
Pit�goras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da
v�rgula.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, hipotenusa, seno;
	
	printf("Digite o valor do cateto oposto: ");
	scanf("%f", &a);
	printf("Digite o valor do adjacente: ");
	scanf("%f", &b);
	hipotenusa=sqrt((a*a)+(b*b));
	seno=a/hipotenusa;
	
	printf("\nhipotenusa: %.3f", hipotenusa);
	printf("\nseno: %.3f", seno);
	
		
	
	return(0);
}
