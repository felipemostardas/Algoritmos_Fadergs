#include <stdio.h>
#include <string.h>
main(){
	char var1[100];
	char var2[100];
	
	printf("\n\n Digite o nome : ");
	gets(var1);
	
	strcpy(var2, var1);
	
	printf("\n\n Var1 => %s \nVar2 => %s",var1,var2);	
	
}
