#include<iostream>
#include<vector>
using namespace std;

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

Node* convert(vector<int> &arr){
    int n = arr.size();
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->Next = temp;
        Mover = temp ;
    }

    return Head;
};

void Print(Node* Head){
    Node* temp = Head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
};

Node* Deleted(Node* Head){
    Node* temp = Head;

    if(Head==NULL)return Head;

    Head = Head->Next;
    delete temp;

    return Head;
}

int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6};
    Node* Head = convert(arr);
    Print(Head);

    Head= Deleted(Head);
    Print(Head);
    return 0;
}