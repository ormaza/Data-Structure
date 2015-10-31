#include <bits/stdc++.h>
using namespace std;

void print(vector<int> left, int p, vector<int> right)
{
    vector<int> out;
    for(int i=0;i<left.size();i++) cout<<left[i]<<" ";
    cout<<p<<" ";
    for(int i=0;i<right.size();i++) cout<<right[i]<<" ";
    cout<<endl;
}

void quickSort(vector <int> &arr) {
    vector<int> left,right;
    int p=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<p) left.push_back(arr[i]);
        else right.push_back(arr[i]);
    }
    //logic
    if(left.size()>1) quickSort(left);
    if(right.size()>1) quickSort(right);
    print(left,p,right);

    //re-allocate
    arr.clear();
    for(int i=0;i<left.size();i++) arr.push_back(left[i]);
    arr.push_back(p);
    for(int i=0;i<right.size();i++) arr.push_back(right[i]);

}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
