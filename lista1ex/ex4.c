#include <stdio.h>

int main(){
     /*
    Elabore um programa em C que receba uma frase, calcule e mostre a quantidade de vogais da frase
    digitada. O programa deverá contar as vogais maiúsculas e minúsculas.
    */
    char str[100];
    int i, vMin = 0, vMai = 0, vogais = 0;
    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vogais++;
            vMin++;
        }
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vogais++;
            vMai++;
        }
    }
    printf("> Numero de vogais: %d \n> Numero de vogais maiusculas: %d \n> Numero de vogais minusculas: %d", vogais, vMai, vMin);
    return 0;
}

