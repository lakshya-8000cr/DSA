#include<iostream>
#include<vector>
using namespace std ;

struct Node {
    int data;
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
    int n = arr.size();
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->Next = temp ;
        Mover = temp;
    }

    return Head;
}

int length(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=nullptr){
        temp = temp->Next;
        count++;
    }

    return count;
}

int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6 , 6};
    Node* head = Convert(arr);
    // cout<<head<<endl; //  this will show the memory adress of the Head Node ;
    // cout<<head->data<<endl; // this will show the data present in the Head Node like 1 is present ;
    // cout<<head->Next; // this will show the Adress of next node we have stored in our Next ;

    // Node* temp = head ;
    
    // while(temp!=nullptr){
    //     cout<<temp->data<<" ";
    //     temp = temp->Next;
    // }

    cout<<length(head);
}