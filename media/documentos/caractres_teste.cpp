#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char frase[50], fraseM[50], frase_trocada[50], frase_normal[50], frase_cifrada[50];
	int i, vogais=0, consoantes=0, palavras=1;
	
	printf("Informe uma frase: \n");
	gets(frase);
	
	printf("\nCaracteres: %i", strlen(frase));
	
	strcpy(frase_normal, frase);
	strcpy(fraseM, strupr(frase));
	
	for(i=0;i<strlen(frase);i++){
		if(fraseM[i]=='A' || fraseM[i]=='E' || fraseM[i]=='I' || fraseM[i]=='O' || fraseM[i]=='U'){
			vogais++;
		} else if(fraseM[i]!=' '){
			consoantes++;
		} else if(fraseM[i]=' '){
			palavras++;
		}
	}
	
	printf("\nVogais: %i", vogais);
	printf("\nConsoantes: %i", consoantes);
	printf("\nQuantidade de palavras: %i", palavras);
	
	strcpy(frase_trocada, frase_normal);
	
	for(i=0;i<strlen(frase);i++){
		if(frase_trocada[i]=='A'){
			frase_trocada[i]='O';
		}
		if(frase_trocada[i]=='a'){
			frase_trocada[i]='o';
		}
		if(frase_trocada[i]=='E'){
			frase_trocada[i]='U';
		}
		if(frase_trocada[i]=='e'){
			frase_trocada[i]='u';
		}
	}
	
	printf("\n\nFrase modificada: \n%s", frase_trocada);
	
	
	strcat(frase_trocada, "Fatec");
	printf("\n\nFrase modificada concatenada com Fatec:\n%s", frase_trocada);
	
	
	printf("\n\nFrase original: %s", frase_normal);
	
	for(i=0;i<strlen(frase_trocada);i++){
		if(frase_trocada[i]=='A' || frase_trocada[i]=='E' || frase_trocada[i]=='I' || frase_trocada[i]=='O' || frase_trocada[i]=='U'){
			frase_trocada[i]+=5;
		} else if(frase_trocada[i]=='a' || frase_trocada[i]=='e' || frase_trocada[i]=='i' || frase_trocada[i]=='o' || frase_trocada[i]=='u'){
			frase_trocada[i]+=5;
		}else{
			frase_trocada[i]-=3;
		}
	}
	
	
	printf("\nFrase modificada cifrada: %s", frase_trocada);
	
	return 0;
	
}
