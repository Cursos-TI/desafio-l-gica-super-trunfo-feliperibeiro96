#include <stdio.h>


 int main (){

// Declarando as variáveis da carta 1
// Usando nome de País e Cidade

   char nome_pais1[30] = "Portugal"; 
   char estado1[3] = "A"; //  Definindo estado utilizando letras de (Ex.: A a H) 
   char codigoCarta1[10] = "A01" ; // Definindo o codigo de cartas com letras baseado no estado (Ex.: A01, B02, C03)
   char nomeCidade1[30] = " Lisboa "; 
   unsigned int populacao1 = 714000;
   int pontoTuristico1 = 20;
   float area1 = 4.114, pib1 = 43.129000000; 
  
// Declarando Variáveis da carta 2 
// Usando nome de Pais e Cidade

   char nome_pais2[30] = "Brasil"; 
   char estado2[3] = "B"; //  Definindo estado utilizando letras de (A a H) 
   char codigoCarta2[10] = "B02" ; // Definindo o codigo de cartas com letras baseado no estado --- ex A01, B02, C03.
   char nomeCidade2[30] = "Niterói";
   unsigned int populacao2 = 700000;
   int pontoTuristico2 = 15;
   float area2 = 3.800, pib2 = 30.129000000; 

// Cálculo da Densidade Demográfica Carta 1 
   float densidade1 = (float)populacao1 / area1;
// Cálculo da Densidade Invertida Carta 1 
   float inver_densidade1 = 1.0 / densidade1;
// Cálculo do PIB per Capta Carta 1 
   float pibPerCapta1 = pib1 / (float)populacao1;
// Cálculo da Densidade Demográfica Carta 2 
   float densidade2 = (float)populacao2 / area2;
// Cálculo da Densidade Invertida Carta 2
   float inver_densidade2 = 1.0 / densidade2;
// Cálculo do PIB per Capta Carta 2 
   float pibPerCapta2 = pib2 / (float)populacao2;
          
// Criando o Menu interativo  1
   
   int opcao1, opcao2;
   float valor1_carta1 = 0, valor2_carta1 = 0, soma1 = 0;
   float valor1_carta2 = 0,valor2_carta2 = 0, soma2 = 0;
     

        
      printf("=== Bem vindo ao Jogo Super Trunfo - Países ===\n");
      printf("Você pode escolher somente dois atributos!\n");
      printf("1: População\n");
      printf("2: Área\n");
      printf("3: PIB\n");
      printf("4: Pontos Turísticos\n");
      printf("5: Densidade Demográfica\n");
      printf("Vamos começar, escolha o primeiro Atributo:\n");
        scanf("%d", &opcao1); 

// Mensagem para fazer a escolha do segundo atributo sem ter que repetir o menu 
         
      printf("Escolha o segundo Atributo! \n");+
         scanf("%d", &opcao2);
// Logica para impedir que escolha o mesmo atributo duas vezes
   
   if(opcao2 == opcao1){
      printf("Você escolheu o mesmo atributo!\n");
      opcao2 = 0;
   }

// Lógica para o primeiro atributo escolhido

   switch (opcao1)
 {
   case 1:
       printf("1: População\n");
       // Calculo dos atributos
       valor1_carta1 = populacao1;
       valor1_carta2 = populacao2;
       break;
   case 2: 
       printf("2: Área\n");
       valor1_carta1 = area1;
       valor1_carta2 = area2;
       break;
        
   case 3: 
       printf("3: PIB\n");
       valor1_carta1 = pib1;
       valor1_carta2 = pib2;
      
       break;
   case 4:
       printf("4: Pontos Turísticos\n");
       valor1_carta1 = pontoTuristico1;
       valor1_carta2 = pontoTuristico2;
      
       break;
   case 5:
       printf("5: Densidade Demográfica\n");
       valor1_carta1 = inver_densidade1;
       valor1_carta2 = inver_densidade2;
       break;
      
   default:
       printf("Opção Inválida!\n");
       break;
 } 
      
 
// Lógica para o segundo atributo a ser escolhido 

      switch (opcao2)
 {
 case 1:
       printf("População\n");
       valor2_carta1 = populacao1;
       valor2_carta2 = populacao2;
      break;
 case 2: 
       printf("Área\n");
       valor2_carta1 = area1;
       valor2_carta2 = area2;
       break;
 case 3: 
       printf("PIB\n");
       valor2_carta1 = pib1;
       valor2_carta2 = pib2;
       break;
 case 4:
       printf("Pontos Turísticos\n");
       valor2_carta1 = pontoTuristico1;
       valor2_carta2 = pontoTuristico2;
       break;
case 5:
       printf("Densidade Demográfica\n");
       valor2_carta1 = inver_densidade1;
       valor2_carta2 = inver_densidade2;
// Usa-se a densidade invertida para o atributo Densidade.

 default:
       printf("Opção Inválida\n");
   break;
 }
// Lógica para somar o valor dos atributos 

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

// Exibição dos Resultados carta 1 

    printf("=== RESULTADO ===\n");
    printf("Pais 1: %s\n", nome_pais1);
    printf("Atributo %d: %f  |   Atributo %d: %f |  Soma: %.2f\n",opcao1,valor1_carta1,opcao2,valor2_carta1, soma1);

// Exibição dos Resultados carta 2 
    
    printf("Pais 2: %s\n", nome_pais2);
    printf("Atributo %d: %f  | Atributo %d: %f  | Soma: %.2f\n", opcao1,valor2_carta1,opcao2,valor2_carta2,soma2);

    if(soma1 == soma2){
      printf("=== EMPATE ===");
    } else if(soma1 > soma2){
      printf("A carta vencedora é: %s\n", nome_pais1);
    } else { 
      printf("A carta vencedora é: %s\n", nome_pais2);
 }

}