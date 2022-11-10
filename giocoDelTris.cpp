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

/*void stampaCampoIniziale(string campo[])
{
    cout<<" * | * | * "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" * | * | * "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" * | * | * "<<endl;
    cout<<"   |   |   "<<endl;
}*/

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
    if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
    {
        segno1 = 0;
        cout<<"posizione gia occupata, inserire un altra posizione: ";
        cin>>segno1;
    }
    else
    {
        campo[segno1 - 1] = "X";
    }
}

void turnoSegno2(string campo[], int segno2)
{
    if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
    {
        segno2 = 0;
        cout<<"posizione gia occupata, inserire un altra posizione: ";
        cin>>segno2;
    }
    else
    {
        campo[segno2 - 1] = "O";
    }
}

void Tris(string campo[], int trisEsciDalGioco, char player1, char player2, bool TRISexit)
{
    if(campo[0] == "X" && campo[1] == "X" && campo[2] == "X")
    {
        if(player1 == 'X')
        {
            cout<<"\nComplimenti, il player 1 ha fatto tris!"<<endl;
            cout<<"\nGioco terminato, grazie per aver giocato, permere 1 per uscire dal programma . . .";
            cin>>trisEsciDalGioco;

            if(trisEsciDalGioco == 1)
            {
                TRISexit = true;
            }
        }
        else
        {
            if(player2 == 'O')
            {
                cout<<"\nComplimenti, il player 1 ha fatto tris!"<<endl;
                cout<<"\nGioco terminato, grazie per aver giocato, permere 1 per uscire dal programma . . .";
                cin>>trisEsciDalGioco;

                if(trisEsciDalGioco == 1)
                {
                    TRISexit = true;
                }
            }
        }
    }
}

int main(){ 

    ///string campo[dim] = {"*", "X", "O"};
    string campo[dim];
    int varAvanti, segno1, segno2;
    int trisEsciDalGioco = 0;
    char player1, player2;
    bool TRISexit = false;

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
        
        //incizio turni gioco
        for(int i = 1; i <= dim; i++)
        {
            cout<<"\nTurno "<<i<<"!\n"<<endl;

            cout<<"\nPlayer 1, inserire la casella dove vuoi inserire il tuo segno: ";
            cin>>segno1;
            
            if(segno1 < 0 or segno1 > 9)
            {
                segno1 = 0;
                cout<<"La cella inserita è inesistente, per favore reinserire il numero della cella dove si vuole mettere il proprio segno: ";
                cin>>segno1;
                cout<<endl;
            }
            cout<<endl;

            turnoSegno1(campo, segno1);
            stampaCAMPO(campo);

            if(TRISexit = true)
            {
                return 0;
            }

            cout<<"\nPlayer 2, inserire la sella dove vuoi inserirer il tuo segno: ";
            cin>>segno2;

            if(segno2 < 0 or segno2 > 9)
            {
                segno2 = 0;
                cout<<"La cella inserita è inesistente, per favore reinserire il numero della cella dovi si vuole mettere il proprio segno: ";
                cin>>segno2;
                cout<<endl;
            }
            cout<<endl;

            turnoSegno2(campo, segno2);
            stampaCAMPO(campo);

            if(TRISexit = true)
            {
                return 0;
            }
        }        
    }

    return 1;
}
