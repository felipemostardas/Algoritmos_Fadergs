#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <string.h>

typedef struct //struct
{ 
	int box;
	char Cliente[100], carro[50],status;
	float valor;
}cliente;

typedef struct{ //struct armazenar clientes
	cliente listaClientes [1000];
	int cont_cliente;
}GLOBAL;

void menuPrincipal (GLOBAL *global);
void cadastro (GLOBAL *global);
void exibirClientes (GLOBAL *global);
void pagamento (GLOBAL *global);


main()
{
	setlocale(LC_ALL,"Portuguese");
	
	GLOBAL global;
	global.cont_cliente=0;
	menuPrincipal(&global);
	
}

void menuPrincipal (GLOBAL *global){
	system("cls");
	int nbox=0;
	char opt=0;
	printf ("*** Software estacionamento ***");
	printf ("\n  Escolha uma das opções a baixo  ");
	printf ("\n\n 1- Cadastramento");				
	printf ("\n 2- Cliente");		
	printf ("\n 3- Pagamento");					
	printf ("\n 4- Relatório");
	printf ("\n 5- Zerar Pagamentos");
	printf ("\n S- Sair");
	printf ("\n\n Qual opção desejada ==> ");
	
	scanf ("%c",&opt);
	fflush(stdin);			
	system("cls");	
	switch (opt){ 
	
	case '1':	// cadatramento	 
		cadastro (global);
		system("pause");
		return menuPrincipal(global);		
		break;
	case '2': // clientes
		exibirClientes (global);
		system("pause");
		return menuPrincipal(global);
		break;
	case '3': //pagamento
		printf ("\n BUSCAR BOX \n");
		printf ("Digite o box que deseja localizar ==> ");
		scanf (nbox);
		//pagamento (global, nbox);
		system("pause");
		return menuPrincipal(global);
		break;
	case '4':  //relatório
	
		system("pause");
		menuPrincipal(global);
		break;
	case '5':  // zerar pagamentos	 
		system("pause");
		return menuPrincipal(global);		
		break;
	case 'S':  // sair	 
		printf ("SAINDO DO SISTEMA");
		system("exit");
		break;
	default: 
		return menuPrincipal(global);
		break;										
	} 			
}

// cadastrar
void cadastro (GLOBAL *global){
	cliente auxiliar;

	printf ("CADASTRO\n");
	printf ("Nome ==> ");
	gets (auxiliar.Cliente);
	printf ("Carro ==> ");
	gets (auxiliar.carro);			
	printf ("Box ==> ");	
	scanf ("%i",&auxiliar.box);
	fflush(stdin);	
	auxiliar.status='N';
	auxiliar.valor=0;
	global->listaClientes[global->cont_cliente]=auxiliar;
	global->cont_cliente++;
}

// exibir clientes
void exibirClientes (GLOBAL *global)
{
	printf ("\n Exibição de Clientes \n");
	for (int cont=0;cont<global->cont_cliente;cont++)
	{
	printf ("Nome: %s\n",global->listaClientes[cont].Cliente);
	printf ("Carro: %s\n",global->listaClientes[cont].carro);
	printf ("Box: %i\n",global->listaClientes[cont].box);
	printf ("Status: %c\n\n",global->listaClientes[cont].status);
			
	}	
	
}

//pagamento
void pagamento (GLOBAL *global)
{
	int posicao = -1;
	
	for (int cont=0;cont<global->cont_cliente;cont++) 
	{	
		if (nbox == global->listaClientes[cont].box)
		{
		posicao = cont; 
		}
	}	
}
