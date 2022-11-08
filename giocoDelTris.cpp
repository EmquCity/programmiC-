        #include <iostream>
        #include <ctime>
        #define dim 8

        using namespace std;

        void visualizzaCampoInizio() //questa funzione fa visualizzare il campo solo all'inizio per far vedere come e fatto ma senza posizioni dell' array
        {
            cout<<"  * | * | *  "<<endl;
            cout<<" ___|___|___ "<<endl;
            cout<<"  * | * | *  "<<endl;
            cout<<" ___|___|___ "<<endl;				
            cout<<"  * | * | *  "<<endl;
            cout<<"    |   |    "<<endl;
        }

        void stampaCampoGioco(char campo[])
        {
            for(int i = 0; i < dim; i++) 
            {
                if(i == 3 || i == 6)
                {
                    cout<<endl;
                }
                cout<<campo[i];
            }
        }

        int main(){ 

            char campo[dim];
            int varAvanti;
            char player1, player2;

            cout<<"*** GIOCO DEL TRIS ***"<<endl;

            cout<<"\nRegole del gioco: \n\nSi gioca su una griglia 3x3 caselle (9 caselle totali). Il giocatore di turno occupa una delle caselle con il suo simbolo (X oppure O), poi cede la mossa all'avversario. Vince il primo giocatore che riesce ad ottenere *TRIS* ovvero tre simboli addiacenti in riga, in colonna o lungo una delle diagonali.";

            cout<<"\n\nInserire 0 per iniziare a giocare . . . ";
            cin>>varAvanti;

            if(varAvanti == 0)
            {
                cout<<"\nCampo di gioco iniziale!\n"<<endl;

                visualizzaCampoInizio();

                //richiesta in input del segno per il giocatore 1 e il giocatore 2
                cout<<"Inserire il segno che deve utilizzare il giocatore 1 (X oppure O): ";
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

                cout<<"Segno player1: "<<player1<<endl;
                cout<<"Segno player2: "<<player2<<endl;

            }

            return 0;
        }
