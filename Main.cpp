#include "Header.h"

char alph[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char lalph[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
char input[100];
std::string yorn;
int crot = 0;
int asize;
int size;
std::string yes[4] = { "Yes", "yes", "y", "Y" };
std::string no[4] = { "No", "no", "n", "N" };

//Add support for spaces

int main() {
	std::cout << "Are you encrypting?Y/N";
	std::cin >> yorn;
	for (int k = 0; k < 4; k++) {
		if (yorn == no[k]) {
			std::cout << "Input letters to decrypt:";
			std::cin >> input;
			asize = strlen(alph);
			size = strlen(input);
			for (int i = 0; i < size; i++) {
				
					for (int j = 0; j <= asize; j++) {
						
						if (input[i] == alph[j] || lalph[j] == input[i]) {
							crot = j - 13;
							if (crot < 0) {
								crot = crot + 26;
								
							}
							std::cout << alph[crot] << std::endl;
						}

					}
				
				}
			
		}
		if (yorn == yes[k]) {
			std::cout << "Input letters to encrypt:";
			std::cin >> input;
			asize = strlen(alph);
			size = strlen(input);
			for (int i = 0; i < size; i++) {
				for (int j = 0; j <= asize; j++) {
						if (alph[j] == input[i] || lalph[j] == input[i]) {
							crot = j + 13;
							if (crot > 26) {
								crot = crot - 26;

							}
							std::cout << alph[crot];
						}
					
						
				}
				
			}
		}

	}
	
	std::cout << std::endl;
	system("pause");

	return 0;
}