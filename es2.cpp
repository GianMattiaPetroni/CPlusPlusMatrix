#include <iostream>
#include <random>
using namespace std;

int main()
{
    int righe = 9;
    int colonne = 9;
    int somma = 0;

    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 10;
            if ((matrice[i][j]) % 3 == 0)
            {
                somma += (matrice[i][j]);
            }
        }

        cout << "    ";
        for (int i = 0; i < colonne; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        int trattini = colonne * 2 + 4;
        for (int i = 0; i < trattini; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < righe; i++)
        {

            cout << i << "|  ";

            for (int j = 0; j < colonne; j++)
            {
                cout << matrice[i][j] << " ";
            }
            cout << endl;
        }
        cout << "---------------------- " << endl;
    }
    cout << "la somma dei numeri divisibili per 3 è: " << somma << endl;
}