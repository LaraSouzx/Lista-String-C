#include <stdio.h>

int main(){
	 /*
    Elabore um programa em C que leia uma string, conte quantos caracteres desta string são iguais a
    letra a e os substitua pela letra b. O programa deve mostrar o número de caracteres modificados e a
    string modificada.
    */
    char str[100];
    int i,cont = 0;
    
    printf("Entre com uma string: \n");
    fgets(str,sizeof(str),stdin);
    
    //para i = 0, e a string i nao chegar ate \0.
    for(i = 0; str[i] != '\0'; i = i + 1){
        if(str[i] == 'a' || str[i] == 'A'){
            //se na string tiver 'a' ou 'A'
            cont = cont + 1;
            str[i] = 'b'; //substituir a por b
        }
    }
    printf("-----------\n");
    printf("%s \n", str);
    printf("foram encontradas %d letras a \n", cont);
	return 0;
}
