#include <stdio.h>

int main(){
    /*
    Elabore um programa em C que inverta uma string. Leia a string e armazene-a invertida em outra
    string. Use o comando for para varrer a string até o seu final. Refaça o programa anterior usando o
    comando while para criar o loop.
    */
    char str[100];
    char strInvertida[100];
    int i, j;
    printf("Entre com uma string: \n");
    fgets(str, sizeof(str), stdin);
    for(j = 0; str[j]; j++);{
 
    //inverte a string
    for(i = 0; str[i]; i++){
        strInvertida[i] = str[j-i-1];// Linha em destaque
    }
    strInvertida[i] = '\0';                                         //coloca um finalizador na string
    printf("\n\nString Invertida: %s\n", strInvertida);
    }
    //
    return 0;
}
