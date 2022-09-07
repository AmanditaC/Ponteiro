//#include <stdio.h>

//int main(void){

   //int x, *p;
   //x=100;
   //p=x;//Falta o &

    //printf("Valor de p = %p\tValor de p = %d", p, *p);
//}

//a) A mensagem que aparecerá é de advertência
//b) Pela falta do operador & a mesagem será exibida
//c) A mensagem apareceu por nâo está corrigido

#include <stdio.h>

int main(void){

    int x, *p;
    x=100;
    p=&x;

    printf("Valor de p = %p\tValor de p = %d", p, *p);
}

//d) Agora sim será compilado com sucesso
//e) Sim