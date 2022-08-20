#include <stdio.h>

int main(){
   /*
   Elabore um programa em C para criptografar uma frase dada pelo usuário (a criptografia troca as
    vogais da frase por asterisco)
   */
   char str[100];
    int i, cont;
    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cont = cont + 1;
            str[i] = '*'; //substituir as vogais por *
        }
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
           cont = cont + 1;
            str[i] = '*'; //substituir as vogais por *
        }
    }
    printf("String criptografada: %s", str);
   
    return 0;
}

