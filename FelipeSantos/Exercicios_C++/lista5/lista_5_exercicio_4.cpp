/* 4. Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, 
necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo
 dispostos em um tabuleiro de 32 casas, de tal forma que o primeiro quadro deveria conter apenas um grão 
 e os quadros subsequentes, o dobro do quadro anterior. Crie um algoritmo para calcular o total de grãos 
 que o monge recebeu. */
 
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int i=1,cont=0;
	float grao=1;

   for (i=1;i<=32;i++){
   	grao= grao * 2;
		printf ("\n %i são %.f graos ",i,grao);      	
   }
    
	printf ("\n\n\n No total são %.f graos ",grao);
}
