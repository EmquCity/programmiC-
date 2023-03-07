//Programma che dato un indirizzo IP calcola: classe, netmask, network, brodcast, ip min-max, tot. Host.

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct indirizzoIP
{
	int netmask;
	int network;
	int brodcast;
	int ipMax;
	int ipMin;
};

void controlloOttetto(int& ottetto) {
	if (ottetto > 255) {
		while (ottetto > 255)
		{
			ottetto = 0;
			cout << ">> Un ottetto non puo essere maggiore di 255, per favore reinserire il valore: ";
			cin >> ottetto;
		}
	}
}

void convertitoreBinario(int& ottetto) {
	//convertitore da decimale a binario, anche se nn credo che serva
}

void convertitoreDecimale() {
	//convertitore da binario a decimale, anche se nn credo che serva
}

void calcoloClasse(int ottetto1) {
	if (ottetto1 > 1 && ottetto1 <= 127) {
		cout << "\nQuesto indirizzo ip e' di classe A." << endl;
	}
	else {
		if (ottetto1 >= 128 && ottetto1 <= 191) {
			cout << "\nQuesto indirizzo ip e' di classe B." << endl;
		}
		else {
			if (ottetto1 >= 192 && ottetto1 <= 223) {
				cout << "\nQuesto indirizzo ip e' di classe C." << endl;
			}
			else {
				if (ottetto1 >= 224 && ottetto1 <= 239) {
					cout << "\nQuesto indirizzo ip e' di classe D." << endl;
				}
			}
		}
	}
}

void calcoloMascheraDiRete(int barra, indirizzoIP indirizzoBinario[]) {

	int ott1[8], ott2[8], ott3[8], ott4[8], dec1, dec2, dec3, dec4;

	for (int i = 1; i <= barra; i++) {
		indirizzoBinario[i].netmask = 1;
	}

	for (int i = barra + 1; i <= 32; i++) {
		indirizzoBinario[i].netmask = 0;
	}

	//mettere i vari 1 e 0 nei vari ottetti

	for (int i = 0; i <= 8; i++) {
		ott1[i] = indirizzoBinario[i].netmask;
	}

	for (int i = 8; i <= 16; i++) {
		ott2[i] = indirizzoBinario[i].netmask;
	}

	for (int i = 16; i <= 24; i++) {
		ott3[i] = indirizzoBinario[i].netmask;
	}

	for (int i = 24; i <= 32; i++) {
		ott4[i] = indirizzoBinario[i].netmask;
	}

	//conversione dei 4 ottetti da binario in decimale;

	//conversione primo ottetto

	for (i = 1; i <= 8; i++) {
		switch (i) {
		case 1: if (ott1[i] == 1) {
				dec1 = 128;
			}else {
				dec1 = 0;
			}
			break;
		case 2: if (ott1[i] == 1) {
			dec1 = dec1 + 64;
			}else {
				dec1 = dec1 + 0;
			}
			break;
		case 3: if (ott1[i] == 1) {
				dec1 = dec1 + 32;
			}else {
				dec1 = dec1 + 0;
			}
			break;
		}
	}

}

int main() {
	int ottetto1, ottetto2, ottetto3, ottetto4, menu, barra;
	bool ciclo = true;
	indirizzoIP indirizzoBinario[32];

	cout << "\t\t***Calcolo informazioni indirizzo IP***" << endl;
	cout << "\nQuesto programma dato un inidizzo ip calcola la classe, netmask, network, indirizzo di brodcast, ip minimo e ip massimo e il totale di host utilizzabili." << endl;
	cout << "\n>> Inserire il primo ottetto dell indirizzo ip: ";
	cin >> ottetto1;
	controlloOttetto(ottetto1);
	cout << ">> Inserire il secondo ottetto dell indirizzo ip: " << ottetto1 << ".";
	cin >> ottetto2;
	controlloOttetto(ottetto2);
	cout << ">> Inserire il terzo ottetto dell indirizzo ip: " << ottetto1 << "." << ottetto2 << ".";
	cin >> ottetto3;
	controlloOttetto(ottetto3);
	cout << ">> Inserire il quarto ottetto dell indirizzo ip: " << ottetto1 << "." << ottetto2 << "." << ottetto3 << ".";
	cin >> ottetto4;
	controlloOttetto(ottetto4);
	cout << ">> Inserire la quantita di bit deistinati alla parte rete (es: /24 24 bit parte rete 8 bit parte host):  ";
	cin >> barra;

	if (barra >= 31 or barra <= 8) {
		while (barra >= 31 or barra <= 8)
		{
			barra = 0;
			cout << ">> Il numero di bit indirizzati alla parte rete npn puo essere minore di 8 o maggiore di 31, per favore reinserire il valore nel range corretto: ";
			cin >> barra;
		}
	}

	cout << "\n>> L'indirizzo ip inserito e': " << ottetto1 << "." << ottetto2 << "." << ottetto3 << "." << ottetto4 << " /" << barra << endl;

	while (ciclo)
	{
		cout << "\nInserire: \n>> 1. Se si vuole sapere la classe dell'indirizzo ip.\n>> 2. Se si vuole sapere la maschera di rete dell'indirizzo ip.\n>> 3. Se si vuole sapere l'indirizzo della rete dell'indirizzo ip.\n>> 4. Se si vuole sapere l'indirizzo di brodcast dell'indirizzo ip.\n>> 5. Se si vuole sapere l'indirizzo ip minimo e massimo della rete.\n>> 5. Se si vuole sapere gli host massimi che puo avere la rete.\n>> 6. Se si vuole visualizzare tutti e 5.\n>> 7. Se si vuole uscire dal programma." << endl;
		cin >> menu;

		switch (menu) {
		case 1: calcoloClasse(ottetto1); //classe
			break;
		case 2:	calcoloMascheraDiRete(barra, indirizzoBinario);
			break;
		case 3:	//network
			break;
		case 4: //brodcast
			break;
		case 5: //ip min-max
			break;
		case 6:	//tutti quanti
			break;
		case 7:	exit(1);
			break;
		}
	}

	return 0;
}
