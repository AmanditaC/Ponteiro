#include <stdio.h>//Biblioteca para as funções principais

int main(){//Inicializador

    int x, y, *p;//Declarando as variáveis

    y=0;//Atribuindo o valor 0 a variável Y
    p=&y;//P vai receber o endereço de Y
    x=*p;//X está recebendo o ponteiro de P
    x=4;//Atribuindo o valor 4 a variável X
    (*p)++;//Incrementando o conteudo apontado por P
    --x;//Decrementando 1 do valor de X
    (*p)+=x;//Acessando o valor de X

    //O valor de X = 3
    //O valor de Y = 4
    //O valor de P = 4

    printf("X = %d\nY = %d\n*P = %d", x, y, p);//Um printf apenas para mostrar o resultado

    return 0;
}