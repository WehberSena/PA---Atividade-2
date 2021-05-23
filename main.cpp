#include <iostream>
#include <cstdlib>
#define MAX 500

using namespace std;

int main()
{
    int k;
    
    while (k<1)
    {
        cout << "\nInforme a quantidade de elementos inteiros maior que 0 do vetor: \n";
        cin >> k;

        if (k<1)
        {
        cout << "\nQuantidade de elemento informado é menor que 0: \n";
        }

    }

    cout << "Informe o(s)" <<" " << k <<" " << "número(s) inteiro(s) para o vetor: \n";
    
    int v[MAX]={}, i;

    for (i=0; i<k; i++) {
        cin >> v[i];
    }

    int maximo, minimo;

    maximo = v[0];
    minimo = v[0];

    cout << endl;
    cout << "Vetor Lido: \n";
    cout << endl;

    for (i=0; i<k; i++) {

        cout << v[i] << " ";

        if (v[i] > maximo){
            maximo = v[i];
        }

        if (v[i] < minimo){
            minimo = v[i];
        }

    }

    cout << endl;
    cout << endl;
    cout << "Máximo elemento no vetor = " << maximo << endl;
    cout << "Mínimo elemento no vetor = " << minimo << endl;

    return 0;
}
