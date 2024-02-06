#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[50]; //array com 50 char para permitir so ater 50 caracteres 

    system("clear"); 

    printf("Nome: ");
    scanf("%s", nome);
    printf("Ola %s\n", nome);

    return 0;
}

    // printf("teste\n"); //printf é uma função 
    // printf("Characters: %s %s %s \n", "ey", "ty", "teste");
    // printf("Decimals: %d %ld\n", 1967, 650000L); //%ld apaga as letras basicamente transforma em numero
    // printf("Preceding with blanks: %10d \n", 19778111);
    // printf("Width trick: %*d \n", 1 ,10);

//d = decimal
//char representa se com apostofre(`)
//%s ou %c diz que ele vai imprimir aql tal numero do tipo string que é um conjunto de char(s%) ou c% que é char  
//stdout e oq sai do terminal output o stdin e oq colocamos no terminal ou input stdr (erro)
//stream fluxo ou corrente (aparece o stdout lento como se fosse a escrever )
