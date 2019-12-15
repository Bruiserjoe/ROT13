#include "Header.h"

char alph[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char input[100];
std::string yorn;
int crot;
std::string yes[4] = { "Yes", "yes", "y", "Y" };
std::string no[4] = { "No", "no", "n", "N" };


int main() {
	std::cout << "Are you encrypting?Y/N";
	std::cin >> yorn;
	for (int k = 0; k < 4; k++) {
		if (yorn == no[k]) {
			std::cout << "Input letters to decrypt: ";
			std::cin >> input;
			int asize = strlen(alph);
			int size = strlen(input);
			for (int i = 0; i < size; i++) {
					for (int j = 0; j <= asize; j++) {

						if (input[i] == alph[j]) {
							crot = j - 13;
							if (crot < 26) {
								crot = crot + 26;

							}
							std::cout << alph[crot] << std::endl;
						}

					}
				}
			
		}
		if (yorn == yes[k]) {
			std::cout << "Input letters to encrypt: ";
			std::cin >> input;
			int asize = strlen(alph);
			int size = strlen(input);
			for (int i = 0; i < size; i++) {
				for (int j = 0; j <= asize; j++) {

					if (input[i] == alph[j]) {
						crot = j + 13;
						if (crot > 26) {
							crot = crot - 26;

						}
						std::cout << alph[crot] << std::endl;
					}
				}
			}
		}

	}
	
	std::cin >> input;

	return 0;
}