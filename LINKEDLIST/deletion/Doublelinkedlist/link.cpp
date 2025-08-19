#include<iostream>
#include<vector>
using namespace std ;

class Node {
    public:
    int data;
    Node* Next;
    Node* Prev;

    public:
    Node(int data1 , Node* Next1 , Node* Prev1){
        data = data1;
        Next = Next1;
        Prev = Prev1;
    }

    public:
    Node(int data1){
        data = data1;
        Next = nullptr;
        Prev = nullptr;
    }

};


Node* Convert(vector<int> &arr){
    Node* Head = new Node(arr[0]);
    Node* Prev = Head;
    int n = arr.size();

    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i] , nullptr , Prev);
        Prev->Next = temp;
        Prev = temp ; // to move forward afetre linking ;
    }

    return Head;
}

void Print(Node* Head){
    Node* temp = Head;
    while ((temp!=NULL))
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}

int main(){
     vector<int>v = {1 , 2 , 3 , 4 , 5};
     Node* Head = Convert(v);
     Print(Head);

}