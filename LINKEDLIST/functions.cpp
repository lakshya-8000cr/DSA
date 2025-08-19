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

int length(Node* Head){
    int count = 0;
    Node* temp = Head;

    while(temp!=nullptr){
         count++;
         temp = temp->Next;
    }

    return count;
}


int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6};
    Node* Head = Convert(arr);
    // cout<<Head->data<<endl;
    // cout<<Head->Next<<endl;
    // int* ptr = &arr[1];
    // cout<<ptr<<endl;

    cout<<length(Head);
    return 0;
}