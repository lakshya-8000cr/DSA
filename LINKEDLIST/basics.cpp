#include<iostream>
#include<vector>
using namespace std ;

class Node {
    public:
    int data;
    Node* Next;
    Node* Back;

    public:
    Node(int data1 , Node* Next1 , Node* Back1){
        data = data1;
        Next = Next1;
        Back = Back1;
    }

    public:
    Node(int data1){
        data = data1;
        Next = nullptr;
        Back = nullptr;
    }

};

Node* Convert(vector<int> &arr){
    Node* Head = new Node(arr[0]);
    Node* temp = Head;
    int n = arr.size();
    for(int i=1; i<n; i++){
        Node* x = new Node(arr[i] , nullptr , temp);
        temp->Next = x;
        temp = x;
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


int main(){
    vector<int>arr = {1,2,3,4,5,6};
    Node* Head = Convert(arr);
    Print(Head);
    return 0;
}