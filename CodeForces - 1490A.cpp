#include <iostream>

using namespace std;

int main()
{   
    int casos;
    int n;
    int i;
    int j;
    int k;
    int *vetor = NULL;
    int maior;
    int menor;
    int aux= 0;
    int total = 0;
    
    cin >> casos;
    
    vetor = new int[n];
    
    for(i=0; i < casos ; i++){
        cin >> n;
        vetor = new int[n];
        total = 0;
        maior = 0;
        menor = 0;
        for(j=0; j < n; j++){
            cin >> vetor[j];
        }
        for(k=0; k < n; k++){
            aux = 0;
            if(k < n-1)
                if((vetor[k] > vetor[k+1]*2) || (vetor[k+1] > vetor[k]*2))
                    if(vetor[k] > vetor[k+1]){
                        maior = vetor[k];
                        menor = vetor[k+1];
                    }
                    else{
                        maior = vetor[k+1];
                        menor = vetor[k];    
                    }
                    while(menor*2 < maior){
                        aux = aux + 1;
                        total = total + 1;
                        menor = menor*2;
                    }
        }
    cout << total << endl;
    }
    return 0;
}
