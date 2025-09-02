#include<iostream>
#include<vector>
using namespace std ;

class Node {
    public:
    int data ;
    Node* next ;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* Convert(vector<int> &arr){
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    int n = arr.size();
    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->next = temp;
        Mover = temp;
    }

    return Head;
}


void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* Reverse(Node* Head){
    if(Head==NULL) return Head;

    Reverse(Head->next);
    cout<<Head->data<<"-";
}





int main(){
    vector<int> arr = {1 , 2 , 3 , 4 , 5};
    Node* Head = Convert(arr);
    Print(Head);
    Head = Reverse(Head);
    Print(Head);
    return 0;
}