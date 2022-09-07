#include <stdio.h>//Biblioteca responsável pelas fuções principais

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);//Declarando o protótipo

int main(){//Função principal

    float p1, p2, p3, media;//Declarando variáveis
    int faltas, aulas;
    
    printf("Informe as notas:\n");//Pedindo o valor das notas
    scanf("%f %f %f", &p1, &p2, &p3);//Lendo e armazenando as notas

    printf("Informe o numero de faltas:\n");//Pedindo o número de faltas
    scanf("%d", &faltas);//Armazenando o n° de faltas
    printf("Informe o numero de aulas:\n");//Pedindo o número de aulas
    scanf("%d", &aulas);//Armazenando o n° de aulas

    situacao(p1, p2, p3, faltas, aulas, &media);//Chamando a função 

    return 0;//Encerrando
}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){//

    float nFaltas;//Declarando variáveis
    
    nFaltas = ((faltas)/aulas)*100; //para calcular o numero de faltaa de alunos
    *media = p1+p2+p3/3.0;  //calcular a media das notas

    printf("-----Situacao-----\n");
    printf("\nA = Aprovado\tR = Reprovado\tF = Reprovado  por faltas\n"); //informando status dos alunos

    if((nFaltas <= 25) && (*media >= 6)){   //caso a media seja maior ou igual a 6 ira mostrara que aprovou
        return printf("\nSituacao = A");
    }
    else if((nFaltas <= 25) && (*media <= 6)){  //caso a media seja menou que 6, mostrara que reprovou
        return printf("\nSituacao = R");
    }
    else{       //e por fim o aluno tivesse com mais faltas, mostrara a situação
        return printf("\nSituacao = F");
    }
}
