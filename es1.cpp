#include <iostream>
#include <string>
using namespace std;
const int numerostudenti = 3;
const int numeroprove = 4;
int i, j;



int main()
{
    int voti[numerostudenti][numeroprove];
   

    for (i = 0; i < numerostudenti; i++)
    {
        for (j = 0; j < numeroprove; j++)
        {
            cout << " inserire il voto dello studente "  << i + 1 <<  " alla prova " << j + 1 << ": ";
            cin >> voti[i][j];
            
        }
    }

    cout << "voti degli studenti: " << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < numerostudenti; i++)
    {
        cout << "studente " << i + 1 << "| ";
        for (int j = 0; j < numeroprove; j++)
        {
            cout << voti[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
