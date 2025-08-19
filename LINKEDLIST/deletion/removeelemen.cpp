#include<iostream>
#include<vector>

using namespace std ;

class Node{
    public:
    int data ;
    Node* Next;

    public:
    Node(int data1, Node* Next1){
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

Node* Delementele(Node* Head , int ele){
    Node* temp = Head;
    Node* previous = NULL;

    if(Head == NULL) return Head;

    if(Head->data == ele){
        Node* temp = Head;
        Head = Head->Next;
        free(temp);
        return Head;
    }

    while(temp!=NULL){
        if(temp->data == ele){
           previous->Next = previous->Next->Next;
           delete temp;
           break;
        }

        previous = temp ;
        temp = temp->Next;
    }

    return Head;

}

int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    Node* Head = Convert(arr);
    Print(Head);
    Delementele(Head , 4);
    Print(Head);

}