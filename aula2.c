#include <stdio.h>

int main (){
    float nota1, nota2, nota3 , soma;
    char turno;

    printf("digite o turno\n");
    scanf("%c",&turno);
     

    printf ("digite 3 notas: \n");

    printf("nota 1:\n");
    scanf("%f", &nota1);

    printf("nota 2:\n");
    scanf("%f", &nota2);

    printf("nota 3:\n");
    scanf("%f", &nota3);

    printf("media:\n");
    soma =  (nota1 + nota2 + nota3)/3;
    if (soma >= 7 && soma <= 8){
        soma = soma +1 ;
    }else if (soma > 8){
        soma = 10;
    }
    
    printf("sua media e essa : %f \n", soma) ;
    
    
    if(turno == 'm'){
        printf("aluno do matutino\n");

    } else if (turno == 'n'){
     printf ("aluno do noturno\n");
    }else {
        printf("turno digitado e invalido!!!\n");

    }

    if(soma <7){
        printf("reprovado\n");
    } else{
        printf("aprovado\n");
    }
   

   return 0;
}