#include <iostream>

using namespace std;

// 1 per la vittoria
// 0 per continuare la partita
// -1 per il pareggio
int isWinner(char *arr)
{
    if ((arr[0, 1, 2] == 'X') || (arr[0, 1, 2] =='O'))
    {
        *arr = 1;
    }
    else if ((arr[0, 3, 6] == 'X')||(arr[0, 3, 6] =='O'))
    {
        *arr = 1;
    }
    else if ((arr[2, 5, 8] == 'X')||(arr[2, 5, 8] == 'O'))
    {
        *arr = 1;
    }
    else if ((arr[6, 7, 8] == 'X')||(arr[6, 7, 8] == 'O'))
    {
        *arr = 1;
    }
    else if ((arr[0, 4, 8] == 'X')||(arr[0, 4, 8] == 'O'))
    {
        *arr = 1;
    }
    else if ((arr[2, 4, 6] == 'X')||(arr[2, 4, 6] == 'O'))
    {
        *arr = 1;
    }
    else if ((arr[1, 4, 7] == 'X')||(arr[1, 4, 7] == 'O'))
    {
        *arr = 1;
    }
    else if ((arr[3, 4, 5] == 'X')||(arr[3, 4, 5] == 'O'))
    {
        *arr = 1;
    }
    else
    {
        *arr = -1;
    }
    return *arr;
   
}

void stampa(char *a)
{
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
        if (i == 2 || i == 5 || i == 8)
        {
            cout << endl;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{

    char vuoto = '_';

    // inizializzo la tabella
    char tabella[9];
    for (int i = 0; i < 9; i++)
    {
        tabella[i] = vuoto;
    }
    stampa(tabella);

    bool xIsNext = true; // gestisce il turno
    while (true)         // i turni del gioco
    {

        int mossa;

        cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
        cin >> mossa;
        mossa--; // per capirci ;)

        while (tabella[mossa] != vuoto || (!(0 <= mossa && mossa < 9))) // controllo 2 condizioni (valido e vuoto)
        {
            cout << "Non puoi inserire qui" << endl;
            cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
            cin >> mossa;
        }

        // se sono arrivato qui è solo perchè l'utente ha inserito un numero corretto
        xIsNext ? tabella[mossa] = 'X' : tabella[mossa] = 'O'; // se è vero metti X altrimenti metti O

        stampa(tabella);

        if (isWinner(tabella) == 1)
        {
            cout << "Hai vinto " << (xIsNext ? 'X' : 'O') << endl;
            break;
        }
        else if (isWinner(tabella) == -1)
        {
            cout << "Pareggio" << endl;
            // reset del gioco
            for (int i = 0; i < 9; i++)
            {
                tabella[i] = vuoto;
            }
            xIsNext = true;
            stampa(tabella);
        }
        else if (isWinner(tabella) == 0)
        {
            xIsNext = !xIsNext; // cambio giocatore
        }
        else
        {
            cout << "Errore nella funzione isWinner" << endl;
        }
    }
}