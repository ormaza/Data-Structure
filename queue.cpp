#include <iostream>
#include <stack>

using namespace std;

template <class X>

class Fila
{
    public:
    std::stack<X> pilhaadd;
    std::stack<X> pilhatmp;

    void Push(X x)
    {
        pilhaadd.push(x);
    }

    X Front()
    {
    if(!pilhaadd.empty()){
        while(!pilhaadd.empty())
        {
            pilhatmp.push(pilhaadd.top());
            pilhaadd.pop();
        }

        X top = pilhatmp.top();

         while(!pilhatmp.empty())
        {
            pilhaadd.push(pilhatmp.top());
            pilhatmp.pop();
        }

        return top;
        }
    else
        {
            return NULL;
        }
    }

    void Pop()
    {
    if(!pilhaadd.empty()){
        while(!pilhaadd.empty())
        {
            pilhatmp.push(pilhaadd.top());
            pilhaadd.pop();
        }

        pilhatmp.pop();

        while(!pilhatmp.empty())
        {
            pilhaadd.push(pilhatmp.top());
            pilhatmp.pop();
        }

        }
    }

    void Print()
    {

        while(!pilhaadd.empty())
        {
            pilhatmp.push(pilhaadd.top());
            pilhaadd.pop();
        }

        while(!pilhatmp.empty())
        {
            cout<<pilhatmp.top()<<" ";
            pilhaadd.push(pilhatmp.top());
            pilhatmp.pop();
        }
    }


};


int main()
{
    //teste da fila

    Fila<int> F;
    F.Push(1); F.Push(2); F.Push(3); F.Push(4); F.Push(5); F.Push(6);
    F.Print(); cout<<endl;
    F.Pop();
    cout << F.Front(); cout<<endl;
    F.Pop();
    cout << F.Front(); cout<<endl;
    F.Push(68);
    F.Print();




    return 0;
}

