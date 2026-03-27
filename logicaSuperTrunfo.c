#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  // Área para definição das variáveis para armazenar as propriedades das cidades
//Váriaveis

		char Estado1;
		char Estado2;

		char Codigo1[4];
		char Codigo2[4];

		char NomeCidade1[30];
		char NomeCidade2[31];

		unsigned long int Populacao1;
		unsigned long int Populacao2;

		float AreaEmkm1;
		float AreaEmkm2;

		float PIB1;
		float PIB2;

		int PontoT1;
		int PontoT2;

		float DensidadePopulacional1;
		float DensidadePopulacional2;
		
		float PibPerCapita1;
		float PibPerCapita2;


  // Área para entrada de dados
    //carta 1
		printf("Vamos fazer a Primeira carta\n");

		printf("Digite a letra do estado(apenas letras de A até H): ");
		scanf(" %c", &Estado1);

		printf("Digite o código da cidade(Codigo exemplo:A01): ");
		scanf(" %s",&Codigo1);

		printf("digite o nome da cidade(Caso tenha espaço digite apenas a sigla(ex: RJ): ");
		scanf(" %s", &NomeCidade1);

		printf("Digite a População: (numero inteiro) ");
		scanf(" %lu", &Populacao1);

		printf("Digite a A Area em km²: ");
		scanf("%f", &AreaEmkm1);

		printf("Digite o PIB: ");
		scanf("%f", &PIB1);

		printf("Digite a Quantidade de pontos Turísticos: ");
		scanf("%d", &PontoT1);



		//carta 2
		printf("\nAgora faremos a segunda carta\n");

		printf("Digite a letra do estado(apenas letras de A até H): ");
		scanf(" %c", &Estado2);

		printf("Digite o código da cidade(Codigo exemplo:A01): ");
		scanf("%s",Codigo2);

		printf("digite o nome da cidade(Caso tenha espaço digite apenas a sigla(ex: RJ): ");
		scanf("%s", NomeCidade2);

		printf("Digite a População: (numero inteiro) ");
		scanf("%lu", &Populacao2);

		printf("Digite a A Area em km²: ");
		scanf("%f", &AreaEmkm2);

		printf("Digite o PIB: ");
		scanf("%f", &PIB2);

		printf("Digite a Quantidade de pontos Turísticos: ");
		scanf("%d", &PontoT2);
    

		//Cálculos
		DensidadePopulacional1 = (float)Populacao1/AreaEmkm1;
		DensidadePopulacional2 = (float)Populacao2 /AreaEmkm2 ;

		PibPerCapita1 = (float) (PIB1 * 1000000000) / Populacao1;
		PibPerCapita2 = (float) (PIB2 * 1000000000) / Populacao2;

		//cálculo do "super poder""
		float superPoder1 = 
		Populacao1
		+AreaEmkm1
		+PIB1
		+PontoT1
		+PibPerCapita1
		+(1.0/DensidadePopulacional1);

		float superPoder2 = 
		Populacao2
		+AreaEmkm2
		+PIB2
		+PontoT2
		+PibPerCapita2
		+(1.0/DensidadePopulacional2);
		
  // Área para exibição dos dados da cidade

  //printando

		printf("\nCARTA 1:\n");

		printf("Estado: %c\n", Estado1);
		printf("Código: %s\n", Codigo1);
		printf("Nome da cidade: %s\n", NomeCidade1);
		printf("Populaçao: %lu\n", Populacao1);
		printf("Área: %.2f km²\n",AreaEmkm1);
		printf("PIB: %.2f Bilhões de reais\n",PIB1);
		printf("Numero de pontos turísticos: %d\n",PontoT1);
		printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional1);
		printf("PIB per Capita: %.2f bilhões de reais\n",PibPerCapita1);

		printf("\nCARTA 2:\n");

		printf("Estado: %c\n", Estado2);
		printf("Código: %s\n", Codigo2);
		printf("Nome da cidade: %s\n", NomeCidade2);
		printf("Populaçao: %lu\n", Populacao2);
		printf("Área: %.2f km²\n",AreaEmkm2);
		printf("PIB: %.2f Bilhões de reais\n",PIB2);
		printf("Numero de pontos turísticos: %d\n",PontoT2);
		printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
		printf("PIB per Capita: %.2f bilhões de reais\n",PibPerCapita2);

		//printando as comparações
		printf("\nComparação de cartas\n");
        
		//população
        printf("População carta 1: %d\n",Populacao1);
        printf("População carta 2: %d\n",Populacao2);
        if(Populacao1 > Populacao2){
            printf("População da carta 1 é maior\n");
        }else {
            printf("População da carta 2 é maior\n");
        }


		//Área em km²	
        printf("Area em km² carta 1 %d\n", AreaEmkm1);
        printf("Area em km² carta 2 %d\n", AreaEmkm2);
        if (AreaEmkm1 > AreaEmkm2){
            printf("A Area em km² da carta 1 é maior\n");
        }else {
            printf ("A area em km² da carta 2 é maior\n");
        }


		//PIB
        printf("O PIB da carta 1 é %d\n", PIB1);
        printf("O PIB da carta 2 é %d\n", PIB2);

        if (PIB1 > PIB2){
            printf("o PIB da carta 1 é maior\n");
        }else {
            printf("O PIB da carta 2 é maior\n");
        }


		//Pontos Turísticos
        printf("Quantidade de pontos turísticos carta 1 %d\n", PontoT1);
        printf("Quantidade de pontos turísticos carta 2 %d\n", PontoT2);

        if (PontoT1 > PontoT2){
            printf("A carta 1 tem mais pontos Turísticos\n");
        }else {
            printf("A carta 2 tem mais pontos Turísticos\n");
        }
		

		//Densidade populacional
        printf("Densidade populacional da carta 1: %d\n", DensidadePopulacional1);
        printf("Densidade populacional da carta 2: %d\n", DensidadePopulacional2);

        if (DensidadePopulacional1 < DensidadePopulacional2){
            printf("A carta 1 tem menos densidade populacional\n");
        }else {
            printf("A carta 2 tem menos Densidade populacional\n");
        }
		
		
		//PIB per Capita 
        printf("PIB per Capita da carta 1: %d\n", PibPerCapita1);
        printf("PIB per Capita da carta 2: %d\n", PibPerCapita2);

        if (PibPerCapita1 > PibPerCapita2){
            printf("A carta 1 tem mais PIB per Capita\n");
        }else {
            printf("A carta 2 tem mais PIB per Capita\n");
        }

		//Super Poder
        printf("Super poder da carta 1: %d\n", superPoder1);
        printf("Super poder da carta 2: %d\n", superPoder2);

        if (superPoder1 > superPoder2){
            printf("A carta 1 tem mais super poder\n");
        }else {
            printf("A carta 2 tem mais super poder\n");
        }

        //printando a carta vencedora baseada na população

        printf("Comparação de cartas (Atributo: População:\n");

        printf("Carta 1 %s: %d\n",NomeCidade1,Populacao1);
        printf("Carta 2 %s: %d\n",NomeCidade1,Populacao2);
        if(Populacao1 > Populacao2){
            printf("A carta %s é a vencedora!\n ",NomeCidade1);
        }else{
            printf("A carta %s é a vencedora!\n" ,NomeCidade2);
        }

return 0;

}
