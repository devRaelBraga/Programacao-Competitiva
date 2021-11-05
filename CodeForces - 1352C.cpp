#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int aux;
    int numero;
    int contador;
    int m;
    int i;
    int j = 1;
    int num[2];
    int lbool = 0;
    
    cin >> n;
    
    for(i=0; i<n; i++){
        contador = 0;
        lbool = 0;
        m = 0;
        
        
        for(j=0; j < 2; j++){
            cin >> num[j];
        }
        
        j = 1;
        while(contador != num[1]){
            if((j%num[0]) == 0){
                m+=1;
            }
            else{
                contador += 1;
            }
            if(contador != num[1]){
                j += 1;
            }
        }
        numero = j;
        cout << numero << endl;
    }
    return 0;
}
