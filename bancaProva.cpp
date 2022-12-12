#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>  

using namespace std;

void generazionePassword() {
    cout<<"\ngeneraiozne password casuale!"<<endl;

    char charset[78];
    int lungPass, x;

    for(int i = 0; i <= 78; i++) {
        charset[i] = i + 48;
    }

    cout<<"inserire la lunghezza della password: ";
    cin>>lungPass;

    cout<<"\nLa password generata e': ";

    for(int i  = 0; i <= lungPass; i++) {
        x = 0;
        x = (rand()%78)+1;
        cout<<charset[x];
    }

    cout<<"\nSelezionare la password e copiarla con *CTRL + C* e inccollarla dove richiede di inserire la password con *CTRL + V*, miraccomando memorizzate la password o appuntatela per evitare di dimenticarla"<<endl;
}

void registrazione(ofstream dataBaseUsername, string username, string password) {
    cout<<"\n****Benvenuti nella registrazione****"<<endl;
    cout<<"qui potrete registrarvi alla banca Unicredit SpA. "<<endl;

    int generazionePass;
    username = " ";
    password = " ";

    cout<<"Inserire un username valido: ";
    cin>>username;

    if(/*username gia presente nel database*/) {
        username = " ";

        cout<<"\nusername gia presente in archivio, per favore riprovare"<<endl;
        cout<<"inserire un nuovo username: ";
        cin>>username;
    }

    cout<<"\nInserire una password valida: ";
    cin>>password;

    if(/*password gia presente nel database*/) {
        password = " ";

        cout<<"\npassword gia presente in archivio, per favore inserire una nuova password. Se vuoi puoi utilizzare il nostro generatore di passord per creare una password, premere 1 per generare una passwod casuale della lunghezza che deidi tu o premere 2 per creare una password personalizzata: ";
        cin>>generazionePass;

        switch (generazionePass) {
            case 1: generazionePassword();
                break;
            
            case 2: cout<<" ";
                break;
            }
    }
}

int main(){

    srand((unsigned)time(NULL));    //funzione generale per la generazione di numeri casuali

    char charset[78];               //dichiarazione variabili principali del programma
    int lungPass, x, menu1;
    int riprova1;
    string username = " ";
    string password = " ";
    ofstream dataBaseUsername;
    ofstream dataBasePassword;

    cout<<"/*************************************************/\n\tBenvenuti nella Banca Unicredit SpA\n/************************************************/";
    cout<<"\n\n"<<endl;

    cout<<"Inserire: \n1. Se si vuole effetture il login!\n2. Se si vuole effettuare la registrazione!"<<endl;
    cin>>menu1;

    switch(menu1) {
        case 1: username = " ";
                password = " ";

                dataBaseUsername.open("USERNAME.txt");
                dataBasePassword.open("PASSWORD.txt");

                cout<<"\n\nLOGIN."<<endl;
                cout<<"Inserire username: ";

                if(dataBaseUsername == ' ') {
                    cout<<"\nCi dispiace ma nel nostro database non e' presente nessuno username da te inserito, se non vi siete ancora registrati premere 1 per registrarsi o premere 2 per riprovare: ";
                    cin>>riprova1;

                    if(riprova1 == 1) {
                        registrazione(dataBaseUsername, username, password);
                    }
                }

                dataBasePassword.close();
                dataBaseUsername.close();

            break;
    }

    return 0;
}
