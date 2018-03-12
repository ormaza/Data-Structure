#include <iostream>

using namespace std;

struct Node
  {
     int data;
     struct Node *next;
  };

void print(Node* head)
{
    cout<<head->data;
    if(head->next!=NULL)
    {
        cout<<"->";
        print(head->next);
    }
}

int length(Node* head)
{
    if(head!=NULL) return 1+length(head->next);
    else return 0;
}

void add(Node* head,int data)
{
    if(head->next!=NULL) add(head->next,data);
    else{
    Node* ele = new Node;
    ele->data=data;
    ele->next=NULL;
    head->next=ele;}
}

Node* newHead(Node* head,int data)
{
    Node* ele = new Node;
    ele->data=data;
    ele->next=head;
    return ele;
}

void busca(Node* lista,int valor)
{
    if(lista->data!=valor && lista->next!=NULL) busca(lista->next,valor);
    else if(lista->data==valor) {cout<<"Nó encontrado!"<<endl;}
    else {cout<<"Nó nao encontrado!"<<endl;}

}

void exclui(Node* lista,int valor)
{
    if(lista->data==valor)
    {
        lista->data=lista->next->data;
        lista->next=lista->next->next;
        cout<<"Nó deletado"<<endl;
    }
    else
    {
        exclui(lista->next,valor);
    }
}

int main()
{
    //preenchimento da lista
    Node* head = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;

    head->data=1;
    head->next=node2;
    node2->data=2;
    node2->next=node3;
    node3->data=3;
    node3->next=NULL;

    cout<<"Configuração inicial da lista:"<<endl;
    print(head);//imprime os nós
    cout<<endl<<"Tamanho: "<<length(head);
    cout<<endl<<"Adiciona um nó no fim da lista"<<endl;
    add(head,4);//adiciona um nó
    print(head);//imprime novamente
    cout<<endl<<"Tamanho: "<<length(head);
    cout<<endl<<"Adiciona um nó no inicio da lista"<<endl;
    head = newHead(head,0);
    print(head);
    cout<<endl<<"Tamanho: "<<length(head);
    cout<<endl<<"Busca nó 2 na lista: ";
    busca(head,2); //busca na lista
    cout<<"Exclui nó 2 da lista: ";
    exclui(head,2); //exclui o item de valor 2 da lista
    cout<<"Busca nó 2 na lista: ";
    busca(head,2); //busca na lista
    print(head); //reimprime a lista
    cout<<endl<<"Tamanho: "<<length(head);

    return 0;
}
