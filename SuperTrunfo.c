#include <stdio.h>

//Inicia o codigo

    /*Cada variavel esta representado por um numero ao final para cada uma das cartas,
    como exemplo carta1 , estado1 - carta2 , estado2, e assim por diante.*/

int main(){
    char estado1, codigo_da_carta1[50], nome_da_cidade1[50], estado2, codigo_da_carta2[50], nome_da_cidade2[50];
	int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area_km1, pib1, area_km2, pib2;
    float den_pop1, renda_capita1, den_pop2, renda_capita2;
        
    /*Criado mais int e float para nao estourar os dados em tela*/
    int populacao_resultado, pontos_turisticos_resultado;
	float area_resultado, pib_resultado, pib_per_capita_resultado, den_pop_resultado;
	float den_pop_invertida1, den_pop_invertida2, renda_per_capita_resultado;
	float super_poder_carta1, super_poder_carta2, super_poder_master;
    
	//================
	//========Abaixo, inicio do codigo para primeira carta.
	//================
	
    //Imprime nome da primeira carta
    printf("\n_____Insira os dados da primeira carta: \n");
    
	//Imprime o pedido de estado da primeira carta
    printf("Estado(Apenas uma letra): \n");
   
    //Abre o pedido de insercao do estado da primeira carta
    scanf(" %c", &estado1);
   
    //Imprime o pedido de codigo da primeira carta
    printf("Codigo: \n");
    
	//Abre o pedido de insercao do codigo da primeira carta
    scanf("%s", codigo_da_carta1);
  
    //Imprime o pedido de cidade da primeira carta
    printf("Nome da cidade(apenas uma palavra): \n");
   
    //Abre o pedido de insercao do cidade da primeira carta
    scanf("%s", nome_da_cidade1);
   
    //Imprime o pedido de cidade da primeira carta
    printf("Populacao: \n");
    
	//Abre o pedido de insercao do polulacao da primeira carta
    scanf("%d", &populacao1);
   
    //Imprime o pedido de area da primeira carta
    printf("area: \n");
   
    //Abre o pedido de insercao de area da primeira carta
    scanf("%f", &area_km1);
   
    //Imprime o pedido de pib da primeira carta
    printf("PIB: \n");
   
    //Abre o pedido de insercao do pib da primeira carta
    scanf("%f", &pib1);
    
	//Imprime o pedido de numeros de pontos turisticos da primeira carta
    printf("Numero de pontos turisticos: \n");
    
	//Abre o pedido de insercao do numeros de pontos turisticos da primeira carta
    scanf("%d", &pontos_turisticos1);
    
    //Gera a conta de densidade populacional primeira carta - quociente entre populacao / area
    den_pop1 = populacao1 / area_km1;
    
    //Gera a conta de renda per capita primeira carta - quociente entre pib / populacao
    renda_capita1 = pib1 / populacao1;
	
	//Imprime densidade populacional primeira carta     
    printf("Densidade populacional: %.2f\n", den_pop1);

	//Renda per capita primeira carta
	printf("Renda per capita: %.2f\n", renda_capita1);
	
    //Fim do questionario da primeira carta.   
    
    //================
    //========Abaixo, inicio do codigo para segunda carta.
	//================
	
	//Imprime nome da segunda carta
    printf("\n_____Insira os dados da segunda carta: \n");
    
	//Imprime o pedido de estado da segunda carta
    printf("Estado(Apenas uma letra): \n");
    
	//Abre o pedido de insercao do estado da segunda carta
    scanf(" %c", &estado2);
    
	//Imprime o pedido de codigo da segunda carta
    printf("Codigo: \n");
    
	//Abre o pedido de insercao do codigo da segunda carta
    scanf("%s", codigo_da_carta2);
	
	//Imprime o pedido de cidade da segunda carta
    printf("Nome da cidade(apenas uma palavra): \n");
    
	//Abre o pedido de insercao do cidade da segunda carta
    scanf("%s", nome_da_cidade2);
    
	//Imprime o pedido de populacao da segunda carta
    printf("Populacao: \n");
    
	//Abre o pedido de insercao do polulacao da segunda carta
    scanf("%d", &populacao2);
    
	//Imprime o pedido de area da segunda carta
    printf("area: \n");
    
	//Abre o pedido de insercao de area da segunda carta
    scanf("%f", &area_km2);
    
	//Imprime o pedido de pib da segunda carta
    printf("PIB: \n");
    
	//Abre o pedido de insercao do pib da segunda carta
    scanf("%f", &pib2);
    
	//Imprime o pedido de numeros de pontos turisticos da segunda carta
    printf("Numero de pontos turisticos: \n");
    
	//Abre o pedido de insercao do numeros de pontos turisticos da segunda carta
    scanf("%d", &pontos_turisticos2);
	
	//Fim do questionario da segunda carta.
	
	//================	
	//========Inicio do retorno dos dados da primeira carta.
	//================
	
	//Imprime nome da primeira carta.
    printf("_____Dados da Primeira carta: \n");
	
	//Imprime estado da primeira carta.
    printf("Estado: %c\n", estado1);
	
	//Imprime codigo da primeira carta.
    printf("Codigo: %s\n", codigo_da_carta1);
	
	//Imprime cidade da primeira carta.
    printf("Cidade: %s\n", nome_da_cidade1);  
	
	//Imprime populacao da primeira carta.
    printf("Populacao: %d\n", populacao1);
	
	//Imprime area da primeira carta.
    printf("Area: %.2f\n", area_km1);
	
	//Imprime pib da primeira carta.
    printf("PIB: %.2f\n", pib1);
    
	//Imprime ponto turistico da primeira carta.
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

	//Fim das respostas da primeira carta.

	//================
	//========Inicio do retorno dos dados da segunda carta.
	//================
	
	//Imprime nome da segunda carta.
    printf("\n_____Dados da Segunda carta: \n");
	
	//Imprime estado da segunda carta.
    printf("Estado: %c\n", estado2);
	
	//Imprime codigo da segunda carta.
    printf("Codigo: %s\n", codigo_da_carta2);

	//Imprime cidade da segunda carta.
    printf("Cidade: %s\n", nome_da_cidade2);  

	//Imprime populacao da segunda carta.
    printf("Populacao: %d\n", populacao2);

	//Imprime area da segunda carta.
    printf("Area: %.2f\n", area_km2);

	//Imprime pib da segunda carta.
    printf("PIB: %.2f\n", pib2);
   
    //Imprime ponto turistico da segunda carta.
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    
    //Gera a conta de densidade populacional segunda carta - quociente entre populacao e area
    den_pop2 = populacao2 / area_km2;
    
    //Gera a conta de renda per capita segunda carta - quociente entre pib e populacao
    renda_capita2 = pib2 / populacao2;
	
	//Imprime densidade populacional segunda carta     
    printf("Densidade populacional: %.2f\n", den_pop2);

	//Renda per capita segunda carta
	printf("Renda per capita: %.2f\n", renda_capita2);
  
    //Fim das respostas da segunda carta.
  
  	//================
	//========Inicio da comparacao entre as duas cartas.
	//================
	
	//Resultado das comparacoes
	printf("\n_____Resultado das comparacoes: ");	
	
	//Comparacao de populacao
	populacao_resultado = populacao1 > populacao2 ;
		
	//Imprime o vencedor em populacao
	printf("\nVenceu o populacao: %d", populacao_resultado);
	
	//Comparacao de area
	area_resultado = area_km1 > area_km2;
	
	//Imprime o vencedor em area
	printf("\nVenceu o area: %.0f", area_resultado);
	
	//Comparacao de pib
	pib_resultado = pib1 > pib2;
	
	//Imprime o vencedor em pib
	printf("\nVenceu o pib: %.0f", pib_resultado);
	
	//Comparacao de pontos turisticos
	pontos_turisticos_resultado = pontos_turisticos1 > pontos_turisticos2;
	
	//Imprime o vencedor em ponto turistico
	printf("\nVenceu o ponto turistico: %d", pontos_turisticos_resultado);
	
	//Conta para inverter a densidade populacional
	den_pop_invertida1 = (1 / den_pop1);
	
	//retorna a execucao o resultado da conta de densidade populacional
	den_pop_invertida2 = (1 / den_pop2);
	
	//Comparacao de densidade populacional
	den_pop_resultado = den_pop_invertida1 < den_pop_invertida2;
	
	//Imprime o vencedor em densdade populacional
	printf("\nVenceu a densidade populacional: %.0f", den_pop_resultado);	
	
	//Comparacao de renda per capita
	renda_per_capita_resultado = renda_capita1 > renda_capita2;
	
	//Imprime o vencedor em renda per capita
	printf("\nVenceu a renda per capita: %.0f", renda_per_capita_resultado);
	
	//===========Super poder
	
	//Soma da primeira carta
	super_poder_carta1 = populacao1 + pontos_turisticos1 + area_km1 + pib1 + renda_capita1 + den_pop_invertida1;
	
	//Soma da segunda carta
	super_poder_carta2 = populacao2 + pontos_turisticos2 + area_km2 + pib2 + renda_capita2 + den_pop_invertida2; 
	
	//Comparacao do super poder
	super_poder_master = super_poder_carta1 > super_poder_carta2;
	
	//Imprime o vencedor em super poder
	printf("\nVenceu o super poder: %.0f", super_poder_master);
	
   //Finaliza o codigo
   return 0;
   
     
}