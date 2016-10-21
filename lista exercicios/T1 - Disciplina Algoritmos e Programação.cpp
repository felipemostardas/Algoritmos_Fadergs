#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	int senha[6],tent_senha;
	do{	
	printf ("\n Digite senha:");
	scanf ("%i",&senha);
	if(senha==123456){
		printf ("\n Bem vindo ao programa da Pet")
	} else{
		printf ("\n senha incorreta")
		tent_senha++
	}
}while(tent_senha>=3)
}
//teste commit
