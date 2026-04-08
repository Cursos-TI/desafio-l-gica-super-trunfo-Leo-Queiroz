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


  // Área para definição das variáveis para armazenar os dados

		char Estado1;
		char Estado2;

		char Codigo1[10];
		char Codigo2[10];

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

		int atributo1;
		int atributo2;
		int resultado1;
		int resultado2;

  // Área para entrada de dados
    //carta 1
		printf("Vamos fazer a Primeira carta\n");

		printf("Digite a letra do estado(apenas letras de A até H): ");
		scanf(" %c", &Estado1);

		printf("Digite o código da cidade(Codigo exemplo:A01): ");
		scanf(" %s", Codigo1);

		printf("digite o nome da cidade(Caso tenha espaço digite apenas a sigla(ex: RJ): ");
		scanf(" %s", NomeCidade1);

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
		
  // Área para exibição dos dados das cartas

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
		printf("\n***Comparação de cartas***\n");
        printf("Escolha uma opção de comparação\n");
		
		printf("Escolha o primeiro atributo\n");
		printf("1. Pela população\n");
		printf("2. Pela Área em km²\n");
		printf("3. Pelo PIB\n");
		printf("4. Por Ponto Turístico\n");
		printf("5. Por densidade Populacional\n");
		
		printf("Digite a opção que você deseja(apenas o número):\n");
		scanf("%d", &atributo1);

		switch (atributo1)
		{
		case 1:
			//população
			printf("Nome da cidade 1 %s\n", NomeCidade1);
			printf("Nome da cidade 2 %s\n", NomeCidade2);
			printf("População carta 1: %ld\n",Populacao1);
			printf("População carta 2: %ld\n",Populacao2);
			
			resultado1 = Populacao1 > Populacao2 ? 1 : 0;
			
			break;

			case 2:
			//Área em km²	
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Area em km² carta 1 %.2f\n", AreaEmkm1);
				printf("Area em km² carta 2 %.2f\n", AreaEmkm2);
				
				resultado1 = AreaEmkm1 > AreaEmkm2 ? 1 : 0;

			break;
			case 3:
				//PIB
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("O PIB da carta 1 é %.2f\n", PIB1);
				printf("O PIB da carta 2 é %.2f\n", PIB2);

				resultado1 = PIB1 > PIB2 ? 1 : 0;
			break;

			case 4:
			//Pontos Turísticos
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Quantidade de pontos turísticos carta 1 %d\n", PontoT1);
				printf("Quantidade de pontos turísticos carta 2 %d\n", PontoT2);

				resultado1 = PontoT1 > PontoT2 ? 1 : 0;
			break;

			case 5:
				//Densidade populacional
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Densidade populacional da carta 1: %.2f\n", DensidadePopulacional1);
				printf("Densidade populacional da carta 2: %.2f\n", DensidadePopulacional2);

				resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
			break;
			default:
				printf("Opção inválida");
			break;
		}
			printf("Escolha uma opção de comparação\n");
		
		printf("Escolha o segundo atributo\n");
		printf("1. Pela população\n");
		printf("2. Pela Área em km²\n");
		printf("3. Pelo PIB\n");
		printf("4. Por Ponto Turístico\n");
		printf("5. Por densidade Populacional\n");
		
		printf("Digite a opção que você deseja(apenas o número):\n");
		scanf("%d", &atributo2);
		

			if (atributo1 == atributo2)
			{
				printf("os atributos são iguais");
			}else{
			
		switch (atributo2)
		{
		case 1:
			//população
			printf("Nome da cidade 1 %s\n", NomeCidade1);
			printf("Nome da cidade 2 %s\n", NomeCidade2);
			printf("População carta 1: %ld\n",Populacao1);
			printf("População carta 2: %ld\n",Populacao2);
			
			resultado2 = Populacao1 > Populacao2 ? 1 : 0;
			
			break;

			case 2:
			//Área em km²	
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Area em km² carta 1 %.2f\n", AreaEmkm1);
				printf("Area em km² carta 2 %.2f\n", AreaEmkm2);
				
				resultado2 = AreaEmkm1 > AreaEmkm2 ? 1 : 0;

			break;
			case 3:
				//PIB
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("O PIB da carta 1 é %.2f\n", PIB1);
				printf("O PIB da carta 2 é %.2f\n", PIB2);

				resultado2 = PIB1 > PIB2 ? 1 : 0;
			break;

			case 4:
			//Pontos Turísticos
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Quantidade de pontos turísticos carta 1 %d\n", PontoT1);
				printf("Quantidade de pontos turísticos carta 2 %d\n", PontoT2);

				resultado2 = PontoT1 > PontoT2 ? 1 : 0;
			break;

			case 5:
				//Densidade populacional
				printf("Nome da cidade 1 %s\n", NomeCidade1);
				printf("Nome da cidade 2 %s\n", NomeCidade2);
				printf("Densidade populacional da carta 1: %.2f\n", DensidadePopulacional1);
				printf("Densidade populacional da carta 2: %.2f\n", DensidadePopulacional2);

				resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
			break;
			default:
				printf("Opção inválida");
			break;
		}
		//lógica e print do resultado das comparações

			if(resultado1 == 1 && resultado2 == 1){
				printf("VOCÊ VENCEU!!\n");
			}else if(resultado1 != resultado2){
				printf("EMPATE!\n");
			}else{
				printf("VOCÊ PERDEU!\n");
			}

	}


        return 0;

}