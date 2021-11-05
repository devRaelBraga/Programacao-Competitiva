#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int vetor[3];
    int certas = 0;
    int problemas = 0;
    int aux = 0;
    string sla;
    
    cin >> n;
    for(i=0; i < n ; i++){
        for(j=0; j < 3; j++){
            cin >> vetor[j];
        }
        certas = 0;
        aux = problemas;
        if (vetor[0] == 1)
            certas = certas + 1;
        if (vetor[1] == 1)
            certas = certas + 1;
        if (vetor[2] == 1)
            certas = certas + 1;
        if (certas >= 2)
            problemas = aux + 1;
    }
    cout << problemas << endl;
    return 0;
}
