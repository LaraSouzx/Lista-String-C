#include <stdio.h>
  /*
    Elabore um programa C que receba uma frase com letras minúsculas e converta a primeira letra de
    cada palavra da frase para maiúscula
  */
  void strMaiuscula(char texto[50]) {
    for (int i = 0; texto[i] != '\0'; i++) texto[i] -= 32;
    printf("A palavra em maiuscula %s", texto);
}
    int main() {
        char palavra[50];
        char texto[50];
        printf("Digite uma palavra: ");
        fgets(palavra, sizeof(palavra), stdin);
        strMaiuscula(palavra);
        return 0;
    }

   
    
    

