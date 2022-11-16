#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdlib.h>
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
    if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
    {
        segno1 = 0;
        cout<<"posizione gia occupata, inserire un altra posizione: ";
        cin>>segno1;

        if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
        {
            segno1 = 0;
            cout<<"posizione gia occupata, inserire un altra posizione: ";
            cin>>segno1;
            
            if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
            {
                segno1 = 0;
                cout<<"posizione gia occupata, inserire un altra posizione: ";
                cin>>segno1;

                if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
                {
                    segno1 = 0;
                    cout<<"posizione gia occupata, inserire un altra posizione: ";
                    cin>>segno1;

                    if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
                    {
                        segno1 = 0;
                        cout<<"posizione gia occupata, inserire un altra posizione: ";
                        cin>>segno1;

                        if(campo[segno1 - 1] == "X" or campo[segno1 -1] == "O")
                        {
                            segno1 = 0;
                            cout<<"posizione gia occupata, inserire un altra posizione: ";
                            cin>>segno1;

                            if(campo[segno1 - 1] == "X" or campo[segno1 - 1] == "O")
                            {
                                segno1 = 0;
                                cout<<"posizione gia occupata, inserire un altra posizione: ";
                                cin>>segno1;

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
                            else
                            {
                                campo[segno1 - 1] = "X";
                            }
                        }
                        else
                        {
                            campo[segno1 - 1] = "X";
                        }
                    }
                    else
                    {
                        campo[segno1 - 1] = "X";
                    }
                }
                else
                {
                    campo[segno1 - 1] = "X";
                }
            }
            else
            {
                campo[segno1 - 1] = "X";
            }
        }
        else
        {
            campo[segno1 - 1] = "X";
        }
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

        if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
        {
            segno2 = 0;
            cout<<"posizione gia occupata, inserire un altra posizione: ";
            cin>>segno2;
            
            if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
            {
                segno2 = 0;
                cout<<"posizione gia occupata, inserire un altra posizione: ";
                cin>>segno2;

                if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
                {
                    segno2 = 0;
                    cout<<"posizione gia occupata, inserire un altra posizione: ";
                    cin>>segno2;

                    if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
                    {
                        segno2 = 0;
                        cout<<"posizione gia occupata, inserire un altra posizione: ";
                        cin>>segno2;

                        if(campo[segno2 - 1] == "X" or campo[segno2 -1] == "O")
                        {
                            segno2 = 0;
                            cout<<"posizione gia occupata, inserire un altra posizione: ";
                            cin>>segno2;

                            if(campo[segno2 - 1] == "X" or campo[segno2 - 1] == "O")
                            {
                                segno2 = 0;
                                cout<<"posizione gia occupata, inserire un altra posizione: ";
                                cin>>segno2;

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
                            else
                            {
                                campo[segno2 - 1] = "O";
                            }
                        }
                        else
                        {
                            campo[segno2 - 1] = "O";
                        }
                    }
                    else
                    {
                        campo[segno2 - 1] = "O";
                    }
                }
                else
                {
                    campo[segno2 - 1] = "O";
                }
            }
            else
            {
                campo[segno2 - 1] = "O";
            }
        }
        else
        {
            campo[segno1 - 2] = "O";
        }
    }
    else
    {
        campo[segno1 - 2] = "O";
    }
}

void Tris(string campo[], int endCiclo, string player1, string player2)
{  
    endCiclo = 0;

    if(campo[0] == "X" && campo[1] == "X" && campo[2] == "X")
    {
        cout<<"\nComplimenti, "<<player1<<" ha fatto TRIS!"<<endl;

        cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
        cin>>endCiclo;

        if(endCiclo == 1)
        {
            abort();
        }
    }
    else
    {

        if(campo[3] == "X" && campo[4] == "X" && campo[5] == "X")
        {
            cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

            cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
            cin>>endCiclo;

            if(endCiclo == 1)
            {
                abort();
            }
        }
        else
        {
            if(campo[6] == "X" && campo[7] == "X" && campo[8] == "X")
            {
                cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                cin>>endCiclo;

                if(endCiclo == 1)
                {
                    abort();
                }
            }
            else
            {
                if(campo[0] == "X" && campo[3] == "X" && campo[6] == "X")
                {
                    cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                    cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                    cin>>endCiclo;

                    if(endCiclo == 1)
                    {
                        abort();
                    }
                }
                else
                {
                    if(campo[1] == "X" && campo[4] == "X" && campo[7] == "X")
                    {
                        cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                        cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                        cin>>endCiclo;

                        if(endCiclo == 1)
                        {
                            abort();
                        }
                    }
                    else
                    {
                        if(campo[2] == "X" && campo[5] == "X" && campo[8] == "X")
                        {
                            cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                            cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                            cin>>endCiclo;

                            if(endCiclo == 1)
                            {
                                abort();
                            }
                        }
                        else
                        {
                            if(campo[0] == "X" && campo[4] == "X" && campo[8] == "X")
                            {
                                cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                                cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                cin>>endCiclo;

                                if(endCiclo == 1)
                                {
                                    abort();
                                }   
                            }
                            else
                            {
                                if(campo[2] == "X" && campo[4] == "X" && campo[6] == "X")
                                {
                                    cout<<"\nComplimenti,"<<player1<<" ha fatto TRIS!"<<endl;

                                    cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                    cin>>endCiclo;

                                    if(endCiclo == 1)
                                    {
                                        abort();
                                    }  
                                }
                                else
                                {
                                    if(campo[0] == "O" && campo[1] == "O" && campo[2] == "O")
                                    {
                                        cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                        cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                        cin>>endCiclo;

                                        if(endCiclo == 1)
                                        {
                                            abort();
                                        }  
                                    }
                                    else
                                    {
                                        if(campo[3] == "O" && campo[4] == "O" && campo[5] == "O")
                                        {
                                            cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                            cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                            cin>>endCiclo;

                                            if(endCiclo == 1)
                                            {
                                                abort();
                                            }  
                                        }
                                        else
                                        {
                                            if(campo[6] == "O" && campo[7] == "O" && campo[8] == "O")
                                            {
                                                cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                cin>>endCiclo;

                                                if(endCiclo == 1)
                                                {
                                                    abort();
                                                }  
                                            }
                                            else
                                            {
                                                if(campo[0] == "O" && campo[3] == "O" && campo[6] == "O")
                                                {
                                                    cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                    cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                    cin>>endCiclo;

                                                    if(endCiclo == 1)
                                                    {
                                                        abort();
                                                    }
                                                }
                                                else
                                                {
                                                    if(campo[1] == "O" && campo[4] == "O" && campo[7] == "O")
                                                    {
                                                        cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                        cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                        cin>>endCiclo;

                                                        if(endCiclo == 1)
                                                        {
                                                            abort();
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if(campo[2] == "O" && campo[5] == "O" && campo[8] == "O")
                                                        {
                                                            cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                            cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                            cin>>endCiclo;

                                                            if(endCiclo == 1)
                                                            {
                                                                abort();
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if(campo[0] == "O" && campo[3+1] == "O" && campo[8] == "O")
                                                            {
                                                                cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                                cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                                cin>>endCiclo;

                                                                if(endCiclo == 1)
                                                                {
                                                                    abort();
                                                                }
                                                            }
                                                            else
                                                            {
                                                                if(campo[2] == "O" && campo[3+1] == "O" && campo[8] == "O")
                                                                {
                                                                    cout<<"\nComplimenti,"<<player2<<" ha fatto TRIS!"<<endl;

                                                                    cout<<"\nIl gioco e' terminato, inserire 1 per uscire dal gioco . . . ";
                                                                    cin>>endCiclo;

                                                                    if(endCiclo == 1)
                                                                    {
                                                                        abort();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(){ 

    ///string campo[dim] = {"*", "X", "O"};
    string campo[dim];
    int varAvanti, segno1, segno2, fineProgramma, endCiclo;
    string player1, player2;

    cout<<"*** GIOCO DEL TRIS ***"<<endl;

    cout<<"\nRegole del gioco: \n\nSi gioca su una griglia 3x3 caselle (9 caselle totali). Il giocatore di turno occupa una delle caselle con il suo simbolo (X oppure O), poi cede la mossa all'avversario. Vince il primo giocatore che riesce ad ottenere *TRIS* ovvero tre simboli addiacenti in riga, in colonna o lungo una delle diagonali.";

    cout<<"\n\nInserire 0 per iniziare a giocare . . . ";
    cin>>varAvanti;

    if(varAvanti == 0)
    {
        cout<<"\nCampo di gioco iniziale!\n"<<endl;
    
        caricaArrayCampo(campo);
        stampaCAMPO(campo);

        cout<<"\n";
        cout<<"Inserire il nome del player1: ";
        cin>>player1;
        cout<<"Inserire il nome del player2: ";
        cin>>player2;        

        cout<<"\n";
        cout<<"Segno player 1: X!"<<endl;
        cout<<"Segno player 2: O!"<<endl;
        cout<<"\n\n";       

        //incizio turni gioco

        for(int i = 1; i <= dim; i++)
        {
            cout<<"\nTurno "<<i<<"!\n"<<endl;

            cout<<"\n"<<player1<<", inserire la casella dove vuoi inserire il tuo segno: ";
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

            Tris(campo, endCiclo, player1, player2);

            cout<<"\n"<<player2<<", inserire la sella dove vuoi inserirer il tuo segno: ";
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

            Tris(campo, endCiclo, player1, player2);
        }       
    }
}

//
// BY EMQU ;)
//
