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

Node* Reverse(Node* Head){
    Node* temp = Head;
    Node* Prev = NULL;
    while(temp!=NULL){
        Node* x = temp->Next;
        temp->Next = Prev;
        Prev = temp;
        temp = x;
    }

    return Prev;
}


Node* OddEven(Node* Head){
    Node* temp = Head;
    vector<int>arr;
    while(temp!=NULL && temp->Next!=nullptr){
         arr.push_back(temp->data);
         temp = temp->Next->Next;
    }
    if(temp)arr.push_back(temp->data);

    temp = Head->Next;
    while(temp!=NULL && temp->Next!=nullptr){
        arr.push_back(temp->data);
        temp = temp->Next;
    }
    if(temp)arr.push_back(temp->data);

    int i=0; 
    temp = Head;
    while(temp!=NULL){
        temp->data = arr[i];
        i++;
        temp = temp->Next;
    }

    return Head;
}


void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
}

// int length(Node* Head){
//     int count = 0;
//     Node* temp = Head;

//     while(temp!=nullptr){
//          count++;
//          temp = temp->Next;
//     }

//     return count;
// }


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
    Head = OddEven(Head);
    Print(Head);
    return 0;
}