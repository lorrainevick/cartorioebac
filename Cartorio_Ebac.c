#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar dos string

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	strcpy(arquivo,cpf); //Respons�vel por copiar os valores das string
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "W");//cria o arquivo e o "W" significa escrever
	fprintf(file,cpf);//salva o valor da vari�vel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
		
    file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("o usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
	
	
}
int main()
    {
    int opcao=0; //definindo vari�veis
    int laco=1;
    
    for(laco=1;laco=1;)
	{
	
	
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
		
	    printf("### Cart�rio EBAC ###\n\n");
	    printf("Escolha a op��o desejada do MENU:\n\n");
	    printf("\t1 - Cadastro de Alunos\n");
	    printf("\t2 - Consultar Registros\n");
	    printf("\t3 - Deletar Registros\n\n");
	    printf("\t4 - Sair do Sistema\n\n");
	    printf("Op��o: ");// fim do menu
	
	    scanf("%d", &opcao); // armazenamento a escolha do usu�rio
	
    	system("cls"); //respons�vel por limpar a tela
    	
    	
    	switch(opcao)
    	{
    		case 1:
    		registro(); //chamada de fun��es
		    break;
		    
		    system("cls");
		    
		    case 2:
			consultar();
		    break;
		    
		    system("cls");
		    
		    case 3: 
		    deletar();
		    break;
		    		    
		    system("cls");
		    
		    case 4:
		    printf("Obrigado por usar o sistema EBAC!\n");
		    return 0;
		    break;
		       
		    default:
		    printf("Essa op��o n�o est� dispon�vel!\n");
		    system("pause");
		    break;
		    
    	}
    	
    }
}
    			

		

	

	

