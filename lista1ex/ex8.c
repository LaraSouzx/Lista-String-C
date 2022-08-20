char eu[2]={'o'};
char tu[3]={'a','s'};
char ele[2]={'a'};
char nos[5]={'a','m','o','s'};
char vos[4]={'a','i','s'};
char eles[3]={'a','m'};


char palavra[20];
int n;

printf("PALAVRA:\n");
gets(palavra);  // SINTAXE ERRADA ESTAVA DESSA FORMA gets("palavra")

n=strlen(palavra);

//for(i=n;i>=n;i++)
//{
if(palavra[n-2]=='a' && palavra[n-1]=='r') // não PRECISA DE LOOP SÓ UM IF USANDO O STRLEN
{
    palavra[n-2]='contrabarra zero'; // TODA STRING ACABA EM contrabarra 0 então troquei o local do fim dela

    printf("Eu %s%s\n",palavra,eu); // USEI dois %s para imprimir 2 strings sem o uso do strcat =D
    printf("Tu %s%s\n",palavra,tu);
    printf("Ele %s%s\n",palavra,ele);
    printf("Nos %s%s\n",palavra,nos);
    printf("Vos %s%s\n",palavra,vos);
    printf("Eles %s%s\n",palavra,eles);
}
    else
        printf("\a\aPalavra não terminada em ar");// um beep pra tirar uma pira =D
