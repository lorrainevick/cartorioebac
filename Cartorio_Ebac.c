#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsável por cuidar dos string

int registro() //Função responsável por cadastrar os usuários no sistema
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
	scanf("%s",cpf); //%s refere-se a string
	
	strcpy(arquivo,cpf); //Responsável por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "W"); //cria o arquivo e o "W" significa escrever
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
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
		printf("Não foi possível abrir o arquivo!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("o usuário não se encontra no sistema!.\n");
		system("pause");
	}
	
	
}
int main()
    {
    int opcao=0; //definindo variáveis
    int laco=1;
    
    for(laco=1;laco=1;)
	{
	
	
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
		
	    printf("### Cartório EBAC ###\n\n");
	    printf("Escolha a opção desejada do MENU:\n\n");
	    printf("\t1 - Cadastro de Alunos\n");
	    printf("\t2 - Consultar Registros\n");
	    printf("\t3 - Deletar Registros\n\n");
	    printf("Opção: "); // fim do menu
	
	    scanf("%d", &opcao); // armazenamento a escolha do usuário
	
    	system("cls"); //responsável por limpar a tela
    	
    	
    	switch(opcao)
    	{
    		case 1:
    		registro(); //chamada de funções
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
		       
		    default:
		    printf("Essa opção não está disponível!\n");
		    system("pause");
		    break;
		    
    	}
    	
    }
}
    			

		

	

	

