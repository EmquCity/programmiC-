#include <iostream>
#include <ctime>

    using namespace std;

    int main() {

    srand((unsigned)time(NULL));

    char charset[78];
    int lungPass;
    int x = 0;

    /// riempimento array con codici ascii
    for(int i = 0; i<=78; i++)
    {
        charset[i] = i + 48;
    }

    cout<<"\n*** GENERATORE PASSWORD CASUALI ***\n\t\tByEMQU"<<endl;

    cout<<"\nInserire la lunghezza della password: ";
    cin>>lungPass;

    cout<<"\nLa password generata e': ";

    for(int i = 0; i<lungPass; i++)
    {
        x = 0;

        x = (rand()%78)+1;

        cout<<charset[x];

    }

    cout<<"\n\n"<<endl;

    return 0;
}
