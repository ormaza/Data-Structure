#include <iostream>

using namespace std;

int insertionsort(int *R,int N)
{
    int tam = N;
    int moves=0;
    cin >> R[0];
    int last=1;
    cout<<"Lista de ordenacoes: \n";
    while(last<tam)
    {
        cin >> R[last];

    for(int i=0;i<last;i++)
    {
        if(R[last]<R[i])
        {
            int tmp = R[i];
            R[i]=R[last];
            R[last]=tmp;
            moves++;
        }
        cout << R[i] <<" ";
    }
    cout << R[last] <<" ";
    cout<<endl;
    last++;
    }

    return moves;

}

int main()
{
    int n;
    while(true){
    cout << "Entre com o tamanho do array: ";
    cin >> n;
    cout << "Entre com os valores: ";
    int R[n];

    cout <<"Numero de movimentacoes: "<< insertionsort(&R[0],n); cout<<endl;

    cout << "Array ordenado: ";
    for(int i=0;i<n;i++)
    {
        cout << R[i] <<" ";
    }

    cout<<endl;
    }

    return 0;
}
