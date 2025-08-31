#include<iostream>
#include<vector>

using namespace std ;

class Node {
    public:
    int data ;
    Node* Next;

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
    int n = arr.size();
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->Next = temp;
        Mover = temp;
    }

    return Head;
}


Node* DeleteNth(Node* Head , int n){
    Node* fast = Head;
    for(int i=0; i<n; i++){
        fast = fast->Next;
    }
    if(fast==NULL){
        Node* newhead = Head->Next;
        delete Head;
        return newhead;
    }
    
    Node* slow = Head;
    while(fast->Next!=NULL){
        slow = slow->Next;
        fast = fast->Next;
    }

    Node* delnode = slow->Next;
    slow->Next = slow->Next->Next;
    delete delnode;

    return Head;
}


void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
}



int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6};
    Node* Head = Convert(arr);
    // cout<<Head->data<<endl;
    // cout<<Head->Next<<endl;
    // int* ptr = &arr[1];
    // cout<<ptr<<endl;

    // cout<<length(Head);
    // Head = Reverse(Head);
    // Print(Head);
    // Head = OddEven(Head);
    // Print(Head);
    Head = DeleteNth(Head , 2);
    Print(Head);
    return 0;
}