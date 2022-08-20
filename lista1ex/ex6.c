#include <stdio.h>

int main(){
  /*
    Elabore um programa em C que receba uma frase, calcule e mostre a quantidade de palavras da frase
    digitada. Considere que cada espaço em branco indica o final de uma palavra.
  */
    char str[50];
    char frase[50];
    int i, contPalavrA = 0, total = 0;

    printf("Introduza a frase\n");
    fgets(frase,sizeof(frase),stdin);

    for(i = 0; frase[i] != '\0'; i++) {
	    if(!contPalavrA && frase[i] != ' ') {
	    //se contPalavrA e frase nao tiverem espaco, soma +1 palavra
		contPalavrA = 1; // quando a variavel passa de 0 para 1 e porque é uma nova palavra e incrementa o total
		total++;
	    }else if(contPalavrA && frase[i] == ' ')
	    //senao se tive um espaco, nao conta como palavra
		contPalavrA = 0; 
    }

    printf("O número de palavras é: %d\n",total);
    return 0;
}

