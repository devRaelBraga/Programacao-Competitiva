#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;
    int n;
    int i;
    int tamanho;
    
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> palavra;
        tamanho = palavra.size();
        if(tamanho>10){
            cout << palavra[0] << tamanho-2 << palavra[tamanho-1] <<endl;
        }
        else{
            cout << palavra <<endl;
        }
    }

    return 0;
}
