#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int partitio(int A[], int lo, int hi)
{
    int pivot = A[hi];
    int i = lo;
    for (int j=lo;j<hi;j++)
    {
        if (A[j] <= pivot)
        {
            swap(A[i],A[j]);
            i++;
        }
    }
    swap(A[i],A[hi]);
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
    cout<<endl;
    return i;
}
void quicksort(int A[],int lo,int hi)
{
    if (lo < hi)
    {
        int p = partitio(A, lo, hi);
        quicksort(A, lo, p - 1);
        quicksort(A, p + 1, hi);
    }
}

int main() {
    cin>>n;
    int vet[n];
    for(int i=0;i<n;i++) cin>>vet[i];
    quicksort(vet,0,n-1);
    return 0;
}
