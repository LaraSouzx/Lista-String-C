#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Elabore um programa em C, utilizando os comandos for e switch, que leia uma string (use gets) e
	substitua todos os espaços e tabulações ('\t') por caracteres de nova linha ('\n'). O for deve ser
	encerrado quando o caractere de final da string ('\0') for encontrado
	*/
	char str[100];
	int i;
	printf("Entre com um texto : ");
	fgets(str,sizeof(str),stdin);
	printf("Frase digitada \n %s",str);
	for(i = 0; str[i] != '\0'; i = i + 1){
	if(str[i]==' '|| str[i]=='\t'){
	//se na string tiver espaco vazio ou tabulação
	str[i]='\n'; //em todo espaco que ouver ele vai pular uma linha
	}
	}
	printf("novo nome: \n %s",str);
	return 0;
}
