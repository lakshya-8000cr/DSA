#include<iostream>
#include<vector>

using namespace std ;

class Node {
    public:
    int data ;
    Node* Next ;

    public:
    Node(int data1 , Node* Next1){
        data = data1;
        Next = Next1;
    }

    public:
    Node(int data1){
        data = data1;
        Next = nullptr;
    }
};

Node* Convert(vector<int> &arr){
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    int n = arr.size();

    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->Next = temp ;
        Mover = temp ;
    }

    return Head;
};

void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }

    cout<<endl;
}


Node* InsertTail(Node* Head , int val){
    if(Head==NULL){
        return val;
    }

    Node* temp = Head;
    while(temp->Next!=NULL){
        temp = temp->Next;
    }

    Node* newnode = new Node(val , Head);
    temp->Next = newnode;
    return Head;
}


int main(){
    vector<int>arr = { 1 , 2 , 3 , 4 , 5};
    Node* head = Convert(arr);
    Print(head);
    int val ;
    cin>>val;
    head = Insertathead(head , val);
    Print(head);
}