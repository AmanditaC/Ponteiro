#include <stdio.h>//Biblioteca

int main(void){//Função principal

    int a, b, c;//Declaração das bibliotecas
    int *p1;//Declarando um ponteiro
    int *p2=&a;//Declarando um ponteiro e atribuindo o endereço de A
    int *p3=&c;//Declarando outro ponteiro e atribuindo o endereço de C
    p1=p2;//Dizendo que a variável p1 vai ser igual a p2
    *p2=10;//Atribuindo o valor 10 ao ponteiro p2
    b=20;//Atribuindo a B o valor de 20
    int **pp;//Declarando um ponteiro de ponteiro
    pp=&p1;//Atribuindo o endereço de p1 a pp
    *p3=**pp;//O ponteiro p3 recebendo o ponteiro de ponteiro pp
    *p2=b +(*p1)++;//O ponteiro p2 recebendo o valor de b com a soma do incremento do conteúdo apontado por p1

    printf("%d\t%d\t%d\n", a, b, c);//Imprimindo os valores de a, b e c

    return 0;
}