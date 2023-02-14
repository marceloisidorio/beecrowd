#include <stdio.h>
#include <string.h>
// biblioteca para o uso de strings

int main() {
	char animal[15]; // variáveis
	char nome[15], nome2[15], nome3[15];
	
	scanf("%s", &nome);
	scanf("%s", &nome2); // entrada
	scanf("%s", &nome3);
	
	if(strcmp(nome, "vertebrado") == 0) { // verifica se nome == "vertebrado"
		// nível 1
		if(strcmp(nome2, "ave") == 0) {
			// nível 2
			if(strcmp(nome3, "carnivoro") == 0) {
				// nível 3
				strcpy(animal, "aguia"); // animal = "aguia"
				
			} else if(strcmp(nome3, "onivoro") == 0) {
				// nível 3
				strcpy(animal, "pomba"); // animal = "pomba"
				
			}
			
		} else if(strcmp(nome2, "mamifero") == 0) {
			// nível 2
			if(strcmp(nome3, "onivoro") == 0) {
				// nível 3
				strcpy(animal, "homem"); // animal = "homem"
				
			} else if(strcmp(nome3, "herbivoro") == 0) {
				// nível 3
				strcpy(animal, "vaca"); // animal = "vaca"
				
			}
			
		}
		
	} else if(strcmp(nome, "invertebrado") == 0) {
		// nível 1
		if(strcmp(nome2, "inseto") == 0) {
			// nível 2
			if(strcmp(nome3, "hematofago") == 0) {
				// nível 3
				strcpy(animal, "pulga"); // animal = "pulga"
				
			} else if(strcmp(nome3, "herbivoro") == 0) {
				// nível 3
				strcpy(animal, "lagarta"); // animal = "lagarta"
				
			}
			
		} else if(strcmp(nome2, "anelideo") == 0) {
			// nível 2
			if(strcmp(nome3, "hematofago") == 0) {
				// nível 3
				strcpy(animal, "sanguessuga"); // animal = "sanguessuga"
				
			} else if(strcmp(nome3, "onivoro") == 0) {
				// nível 3
				strcpy(animal, "minhoca"); // animal = "minhoca"
				
			}
		}
		
	}
	
	system("cls"); // limpa a tela
	printf("%s\n", animal);
	
	return 0;
}