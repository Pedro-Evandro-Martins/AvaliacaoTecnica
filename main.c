#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool _isPerfectSquare(int value) {
  int root = sqrt(value);
  return ((root * root) == value);
}

bool isFibonacci(int value) {
  // a given integer number 'n' is a fibonacci number if any (or both):
  // (5 * n² + 4) or (5 * n² - 4) is a perfect square
  return _isPerfectSquare(5 * (value * value) + 4) ||
         _isPerfectSquare(5 * (value * value) - 4);
}

int fibonacci(int index) {
  if (index == 0) {
    return 0;
  } else if (index == 1) {
    return 1;
  }

  int current = 1;
  int previous = 0;
  int value = 0;
  for (int i = 2; i <= index; i++) {
    value = previous + current;
    previous = current;
    current = value;
  }

  return value;
}

void question1() {
  printf("\n\n\n\n");

  printf("1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o \n"
         "próximo valor sempre será a soma dos 2 valores anteriores \n"
         "(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa \n"
         "na linguagem que desejar onde, informado um número, ele calcule a \n"
         "sequência de Fibonacci e retorne uma mensagem avisando se o número \n"
         "informado pertence ou não a sequência.\n\n");

  printf("Insira um número inteiro: ");
  int n;
  scanf("%d", &n);

  if (isFibonacci(n)) {
    printf("Eh um numero de sequencia de Fibonacci!\n");
  } else {
    printf("Nao eh um numero da sequência de Fibonacci\n");
  }
}

void question2() {
  printf("\n\n\n\n");

  printf(
      "2) Escreva um programa que verifique, em uma string, a existência da \n"
      "letra ‘a’, seja maiúscula ou minúscula, além de informar a \n"
      "quantidade de vezes em que ela ocorre. \n\n");

  printf("Insira uma string: ");
  char *string = (char *)malloc(sizeof(char) * 256);

  getc(stdin); // clean buffer
  fgets(string, 255, stdin);

  int aCharCounter = 0;
  for (int i = 0; i < 255; i++) {
    if ((string[i] == 'a') || (string[i] == 'A'))
      aCharCounter++;
  }

  printf("'a'/'A' count: %d\n", aCharCounter);
}

void question3() {
  printf("\n\n\n\n");

  printf("3) Observe o trecho de código abaixo:\n"
         "int INDICE = 12, SOMA = 0, K = 1\n;"
         "enquanto K < INDICE faça {\n"
         "    K = K + 1; "
         "    SOMA = SOMA + K; \n"
         "}\n"
         "imprimir(SOMA);\n"
         "Ao final do processamento, qual será o valor da variável SOMA?\n\n");

  int sum = 0;
  int k = 1;
  for (int i = 0; i < 12; i++) {
    k = k + 1;
    sum = sum + k;
  }

  printf("SOMA: %d\n", sum);
}

void question4() {
  printf("4) Descubra a lógica e complete o próximo elemento: \n"
         "a) 1, 3, 5, 7, _%d_\n"
         "b) 2, 4, 8, 16, 32, 64, _%d_\n"
         "c) 0, 1, 4, 9, 16, 25, 36, _%d_\n"
         "d) 4, 16, 36, 64, _%d_\n"
         "e) 1, 1, 2, 3, 5, 8, _%d_\n"
         "f) 2, 10, 12, 16, 17, 18, 19, _%d_\n\n",
         9, (int)pow(2, 7), (36 + 13), (4 * 32), fibonacci(7), 20);
}

void question5() {
  printf("\n\n\n\n");

  printf(
      "5) Você está em uma sala com três interruptores, cada um conectado a \n"
      "uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala "
      "\n"
      "em que está, mas pode ligar e desligar os interruptores quantas vezes \n"
      "quiser. Seu objetivo é descobrir qual interruptor controla qual \n"
      "lâmpada. Como você faria para descobrir, usando apenas duas idas até \n"
      "uma das salas das lâmpadas, qual interruptor controla cada lâmpada? "
      "\n\n");

  printf("1 - Ligar o interruptor A por um tempo e depois desligá-lo permite "
         "que você \n"
         "identifique se ele controla a lâmpada que ainda está quente.\n"
         "2 - O interruptor B é facilmente identificado pela lâmpada acesa.\n"
         "3 - A lâmpada fria e apagada indica que é controlada pelo "
         "interruptor C.\n\n");
}

int main(int argv, char **argc) {

  printf("Escolha a questão que deseja ver a solução:\n\n");

  printf("1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o \n"
         "próximo valor sempre será a soma dos 2 valores anteriores \n"
         "(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa \n"
         "na linguagem que desejar onde, informado um número, ele calcule a \n"
         "sequência de Fibonacci e retorne uma mensagem avisando se o número \n"
         "informado pertence ou não a sequência.\n\n");

  printf(
      "2) Escreva um programa que verifique, em uma string, a existência da \n"
      "letra ‘a’, seja maiúscula ou minúscula, além de informar a \n"
      "quantidade de vezes em que ela ocorre. \n\n");

  printf("3) Observe o trecho de código abaixo:\n"
         "int INDICE = 12, SOMA = 0, K = 1\n;"
         "enquanto K < INDICE faça {\n"
         "    K = K + 1; "
         "    SOMA = SOMA + K; \n"
         "}\n"
         "imprimir(SOMA);\n"
         "Ao final do processamento, qual será o valor da variável SOMA?\n\n");

  printf("4) Descubra a lógica e complete o próximo elemento: \n"
         "a) 1, 3, 5, 7, ___\n"
         "b) 2, 4, 8, 16, 32, 64, ____\n"
         "c) 0, 1, 4, 9, 16, 25, 36, ____\n"
         "d) 4, 16, 36, 64, ____\n"
         "e) 1, 1, 2, 3, 5, 8, ____\n"
         "f) 2,10, 12, 16, 17, 18, 19, ____\n\n");

  printf(
      "5) Você está em uma sala com três interruptores, cada um conectado a \n"
      "uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala "
      "\n"
      "em que está, mas pode ligar e desligar os interruptores quantas vezes \n"
      "quiser. Seu objetivo é descobrir qual interruptor controla qual \n"
      "lâmpada. Como você faria para descobrir, usando apenas duas idas até \n"
      "uma das salas das lâmpadas, qual interruptor controla cada lâmpada? "
      "\n\n");

  printf("[1, 2, 3, 4 ou 5]: ");
  int choice;

  scanf("%d", &choice);

  switch (choice) {
  case 1:
    question1();
    break;
  case 2:
    question2();
    break;
  case 3:
    question3();
    break;
  case 4:
    question4();
    break;
  case 5:
    question5();
    break;

  default:
    printf("Opcao nao encontrada.\n");
    break;
  }

  return 0;
}
