#include <iostream>

using namespace std;

int main()
{
    const int n = 2;
    int matrice1[n][n], matrice2[n][n], somme[n][n];

    cout << "Inserer les elements de la 1ere matrice 2x2 : "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>> matrice1[i][j];
        }
    }
    cout << "---------------------------------"<<endl;
    cout << "Inserer les elements de la 2eme matrice 2x2 : "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>> matrice2[i][j];
        }
    }
    cout << "---------------------------------"<<endl;
    cout << "Resultat de la matrice apres ADDITION : "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            somme[i][j] = matrice1[i][j] + matrice2[i][j];
            cout << somme[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
