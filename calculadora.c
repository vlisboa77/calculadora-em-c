//usuario do git: vlisboa77

/**
 * link utilizado para aprender sobre como utilizar um Switch-Case: https://www.guru99.com/c-switch-case-statement.html#:~:text=What%20is%20Switch%20Statement%20in,that%20particular%20case%20is%20executed.
 * Link utilizado para aprender sobre Funcoes e Procedimentos: https://gabrielbueno072.github.io/rea-aed/aula_func.html
**/
 
#include <stdio.h>
#include <math.h>    //declaracao biblioteca math para conseguir utilizar os comandos pow (potencia) e sqrt (raiz quadrada)

//declarando variaveis globais para utilizar nas funcoes

float resultado, num, num2;

//funcoo para calcular a soma das variaveis

void adicao(){
    printf("Informe os numeros que deseja somar:\n");  //solicitando os numeros do usuario
    scanf("%f %f",&num,&num2);                         //lendo os numeros
    resultado = num+num2;                              //calculando a soma
    printf("Resultado: %.3f\n",resultado);             //imprimindo resultado da soma    
}

//funcao para calcular a subtracao das variaveis

void subtracao(){
    printf("Informe os numeros que deseja subtrair:\n");  //soliitando os numeros do usuario
    scanf("%f %f",&num,&num2);                            //lendo os numeros
    resultado = num-num2;                                 //calculando a subtracao
    printf("Resultado: %.3f\n",resultado);                //imprimindo resultado da subtracao
}

//funcao para calcular a multiplicacao das variaveis

void multiplicacao(){
    printf("Informe os numeros que deseja multiplicar:\n");  //solicitando os numeros do usuario
    scanf("%f %f",&num,&num2);                               //lendo os numeros
    resultado = num*num2;                                    //calculando a multiplicacao
    printf("Resultado: %.3f\n",resultado);                   //imprimindo resultado da multiplicacao
}

//funcao para calcular a divisao das variaveis

void divisao(){
    printf("Informe os numeros que deseja dividir:\n");    //solicitando os numeros do usuario
    scanf("%f %f",&num,&num2);                             //lendo os numeros
    if(num2 == 0) {                                        //verificando se o denominador é 0
        printf("Impossivel dividir!\n");                   //imprimindo mensagem de nao ser possivel dividir
        return;                                            //parando a execucao da funcao
    }
    resultado = num/num2;                                  //calculando a divisao        
    printf("Resultado: %.3f\n",resultado);                 //imprimindo o resultado da divisao
}

//funcao para calcular a potenciacao

void potenciacao(){
    printf("Informe a base e o expoente:\n");   //solicitando os numeros do usuario
    scanf("%f %f",&num,&num2);                  //lendo os numeros
    resultado = pow(num,num2);                  //calculando a potenciacao
    printf("Resultado: %.3f\n",resultado);      //imprimindo o resultado da potenciacao
}

//funcao para calcular a radiciacao

void radiciacao(){
    printf("Informe o numero para calcular a raiz quadrada:\n");      //solicitando os numeros do usuario
    scanf("%f",&num);                                                //lendo os numeros
    if(num < 0) {                                                    //verificando se o valor e negativo
        printf("Por favor, insira um numero nao negativo!\n");       //imprimindo o pedido
        return;                                                      //parando a execucao da funcao
    }
    resultado = sqrt(num);                                            //calculando a radiciacao
    printf("Resultado: %.3f\n",resultado);                            //imprimindo o resultado da radiciacao
}

//funcao principal

int main()          
{
    //declarando a resposta (se o usuario deseja calcular ou nao)
    //e a operacao (qual operacao o usuario deseja realizar)
   
    int resposta, operacao;
   
    //perguntando ao usuario qual operacao ele deseja realizar e apresentando-me
   
    printf("Ola, bem-vindo a minha calculadora!\nMeu nome eh Vinicius Lisboa Cabral\nMeu curso eh Gestao de TI\n");
    printf("Estudo na Faculdade La Salle\nMinha matricula eh 202220471\n");
    printf("Voce deseja realizar uma operacao matematica?\n1 - Sim\n2 - Nao\n");
   
    do{                                //enquanto a resposta do usuario for diferente de 2, a calculadora funciona
        scanf("%d",&resposta);
        switch(resposta){              //verificando a resposta informada
            case 1:
               
                //caso a resposta seja 1, o usuario deve informar qual operacao deve ser realizada
           
                printf("Qual operacao voce deseja realizar?\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Radiciacao\n6 - Potenciacao\n");
                scanf("%d",&operacao);
               
                switch(operacao){   //verificando a operacao escolhida
                   
                   //se escolher 1, chama a funcao adicao() para o calculo
                   case 1:
                        adicao();  
                        resposta=0;
                   break;
                   
                   //se escolher 2, chama a funcao subtracao() para o calculo
                   
                   case 2:
                        subtracao();
                        resposta=0;
                   break;
                   
                   //se escolher 3, chama a funcao divisao() para o calculo
                   
                   case 3:
                        divisao();
                        resposta=0;
                   break;
                   
                   //se escolher 4, chama a funcao multiplicacao() para o calculo
                   
                   case 4:
                        multiplicacao();
                        resposta=0;
                   break;
                   
                   //se escolher 5, chama a funcao radiciacao() para o calculo
                   
                   case 5:
                        radiciacao();
                        resposta=0;
                   break;
                   
                   //se escolher 6, chama a funcao potenciacao() para o calculo
                   case 6:
                        potenciacao();
                        resposta=0;
                   break;
                   default:
                   
                   //caso o usuario nao de uma resposta de 1 a 6, exibir a mensagem a seguir
                   
                        printf("Nao entendi! Informe um numero valido, por favor.\n");
                       
                    //resposta recebe 0 para validar que a pessoa ja fez algum calculo
                    //dessa forma, exibir a mensagem perguntando se deseja realizar outra conta
                   
                        resposta=0;
                   break;
                }
               
            break;
            case 2:
           
            //caso o usuario decida que nao quer utilizar a calculadora
           
            printf("Que pena!\nTchau!\n");
           
            break;
           
            default:
           
            //caso o usuario nao responda 1 ou 2
           
            printf("Nao entendi! Informe um numero valido, por favor.\n");
            break;
        }
       
        //verifica se o usuario ja fez algum calculo e deseja fazer novamente
       
        if(resposta==0)printf("Voce deseja realizar uma operacao matematica novamente?\n1 - Sim\n2 - Nao\n");
    }while(resposta!=2);
}