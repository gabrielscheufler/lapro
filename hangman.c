#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char secret[100];
	char word[100];
	unsigned len;

	printf("Jogo da forca, (c) 2015\n");
	
	printf("Informe a palavra secreta:");
	scanf("%s", secret);

	//FIXME: deve ficar no inicio da tela
	//int i;
	//for (i=0; i<30; i++){
	//printf("\n");	}
	printf("A palavra secreta informada foi: [%s]\n",secret);
	len = strlen(secret);

	
	int j;
	for ( j=0; j<len; j++)
		word[j]= '-';
	word[  len  ] = '\0';
	printf("A palavra apresentada é:[%s]\n",word);

	printf("A palavra tem %d caracteres.\n", len);

	



	printf("**FIM**\n");

return 0;
}
