#include <iostream>
#include <ctime>
#include <string>
#include <cstring>
#include <string.h>
#define dim 9

using namespace std;

void caricaArrayCampo(string campo[])
{
    for(int i = 0; i < dim; i++)
    {
        campo[i] = '*';
    }
}

void stampaCAMPO(string campo[])
{
    cout<<" "<<campo[0]<<" | "<<campo[1]<<" | "<<campo[2]<<endl;
    cout<<"___|___|___ "<<endl;
    cout<<" "<<campo[3]<<" | "<<campo[4]<<" | "<<campo[5]<<endl;
    cout<<"___|___|___ "<<endl;
    cout<<" "<<campo[6]<<" | "<<campo[7]<<" | "<<campo[8]<<endl;
    cout<<"   |   |    "<<endl;
}

void turnoSegno1(string campo[], int segno1)
{
    if(campo[segno1] == "X" or campo[segno1] == "O")
    {
        segno1 = 0;
        cout<<"posizione gia occupata, inserire un altra posizione: ";
        cin>>segno1;
    }
    else
    {
        campo[segno1] == "X";
    }
}

void turnoSegno2(string campo[], int segno2)
{
    if(campo[segno2] == "X" or campo[segno2] == "O")
    {
        segno2 = 0;
        cout<<"posizione gia occupata, inserire un altra posizione: ";
        cin>>segno2;
    }
    else
    {
        campo[segno2] == "O";
    }
}

int main(){ 

    ///string campo[dim] = {"*", "X", "O"};
    string campo[dim];
    int varAvanti, segno1, segno2;
    char player1, player2;

    cout<<"*** GIOCO DEL TRIS ***"<<endl;

    cout<<"\nRegole del gioco: \n\nSi gioca su una griglia 3x3 caselle (9 caselle totali). Il giocatore di turno occupa una delle caselle con il suo simbolo (X oppure O), poi cede la mossa all'avversario. Vince il primo giocatore che riesce ad ottenere *TRIS* ovvero tre simboli addiacenti in riga, in colonna o lungo una delle diagonali.";

    cout<<"\n\nInserire 0 per iniziare a giocare . . . ";
    cin>>varAvanti;

    if(varAvanti == 0)
    {
        cout<<"\nCampo di gioco iniziale!\n"<<endl;
    
        caricaArrayCampo(campo);
        stampaCAMPO(campo);

        //richiesta in input del segno per il giocatore 1 e il giocatore 2
        cout<<"\n\nInserire il segno che deve utilizzare il giocatore 1 (X oppure O): ";
        cin>>player1;
                    
        if(player1 == 'X')
        {
            cout<<"Inserire il segno O visto che il segno X è stato gia preso dal player 1: ";
            cin>>player2;
        }
        else
        {
            cout<<"Inserire il segno X visto che il segno O è stato gia preso dal player 1: ";
            cin>>player2;
        }
       
        cout<<"\n";
        cout<<"Segno player1: "<<player1<<endl;
        cout<<"Segno player2: "<<player2<<endl;
        cout<<"\n\n";
        
        stampaCAMPO(campo);
        
        //incizio turni gioco
        for(int i = 1; i <= dim; i++)
        {
            cout<<"\nTurno "<<i<<"!\n"<<endl;

            cout<<"\nPlayer 1, inserire la casella dove vuoi inserire il tuo segno: ";
            cin>>segno1;
            cout<<"Player 2, inserire la sella dove vuoi inserirer il tuo segno: ";
            cin>>segno2;

            turnoSegno1(campo, segno1);
            turnoSegno2(campo, segno2);
            stampaCAMPO(campo);
        }        
    }

    return 0;
}
