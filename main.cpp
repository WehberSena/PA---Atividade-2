#include <iostream>
#include <cstdlib>
#define MAX 500

using namespace std;

void vet(int &x, int y, int *w, int *z)
{
    cout << endl;
    cout <<"Ponteiro para o vetor: " <<" " << x <<endl;
    cout <<"Quantidade de números inteiros no vetor: " <<" " << y <<endl;
    cout <<"Endereço do máximo valor no vetor: " <<" " << w <<endl;
    cout <<"Endereço do mínimo valor no vetor: " <<" " << z <<endl;
}

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

    int *ptr_vet;

    ptr_vet = &v[k];

    vet(*ptr_vet, k, &maximo, &minimo);

    return 0;
}
