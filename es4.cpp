#include <iostream>

using namespace std;

int main()
{

    int righe = 3;
    int colonne = 3;
    int matrice[righe][colonne];
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = random() % 10;
        }
    }

    for (int i = 0; i < righe; i++)
    {
        cout << "i: " << i << " | ";
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------" << endl;

    for (int i = righe - 1; i >= 0; i--)
    {
        cout << "i: " << i << " | ";
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------" << endl;

    for (int i = 0; i < righe; i++)
    {
        cout << "i: " << i << " | ";
        for (int j = colonne - 1; j >= 0; j--)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------" << endl;

    for (int i = 0; i < colonne; i++)
    {
        cout << "i: " << i << " | ";
        for (int j = 0; j < righe; j++)
        {
            cout << matrice[j][i] << " ";
        }
        cout << endl;
    }
}