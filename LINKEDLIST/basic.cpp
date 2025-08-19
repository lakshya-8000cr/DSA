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
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    int n = arr.size();
    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i]);
        Mover->Next = temp;
        Mover = temp;
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
};


Node* DeleteTail(Node* Head){
    Node* temp = Head;

    if(Head==NULL){
        return NULL;
    }
 
    while(temp->Next->Next != NULL){
        temp = temp->Next;
    }

    temp->Next = nullptr;
    delete temp->Next;
    return Head;
}


Node* DeleteHead(Node* Head){

    Node* temp = Head;

    if(Head==NULL){
        return Head;
    }
    Head = Head->Next;
    delete temp;
    return Head;
}


Node* Deleteindex(Node* Head , int k){ //k defines the ineex where we want to delete; 
    int count = 0;
    Node* Previous = NULL;
    Node* temp = Head;
    while(temp!=NULL){
         count++;
         if(count==(k-1)){
            Previous->Next = Previous->Next->Next;
            delete temp->Next;
         }
        Previous = temp;
        temp = temp->Next;
    }

    return Head;
} 


int main(){
    vector<int>arr = {1 , 2  ,  3  ,  4  ,  5};
    Node* Head = Convert(arr);
    Print(Head);
    DeleteTail(Head);
    Print(Head);
    Head = DeleteHead(Head);
    Print(Head);
    Head = Deleteindex(Head , 2);
    Print(Head);
    return 0;
}