#include <iostream>
#include <random>
using namespace std;

int main()
{int righe=5;
    int colonne=5;
    int matrice[righe][colonne];
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            matrice[i][j]= random()%10; 
            
        }
    }
 
 
    for(int i=0; i<righe; i++){
        int somma=0;
        for(int j=0; j<colonne; j++){
            cout << matrice[i][j] << " ";
            somma+=matrice[i][j];
        }
        cout << " | " << somma;
        cout << endl;
    }
 
    cout << "----------------" << endl;
    
   
    for(int j=0; j<colonne; j++){
        int somma=0;
        for(int i=0; i<righe; i++){
            somma+=matrice[i][j];
        }
        cout << somma << " ";
    }
}
    