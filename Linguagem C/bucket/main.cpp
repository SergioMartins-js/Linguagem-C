
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Função para classificar arr [] de tamanho n usando classificação de bucket
void bucketSort(float arr[], int n)
{
    // 1) Criar n baldes vazios
    vector<float> b[n];

    // 2) Colocar elementos da matriz em diferentes buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i]; // índice do balde
       b[bi].push_back(arr[i]);
    }

    // 3) Classificar baldes individuais
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());

    // 4) Concatene todos os baldes []
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          arr[index++] = b[i][j];
}

/* Programa de driver para testar a função acima*/
int main()
{
    float arr[] = {0.897, 0.565, 0.700, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);

    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
