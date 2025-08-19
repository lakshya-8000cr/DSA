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


void print(Node* Head){
    Node* temp = Head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }

    cout<<endl;
}

Node* deleteindex(Node* Head , int ele){
    // int count = 0;
    Node* previous = NULL;
    Node* temp = Head ;
    while(temp!=NULL){
        // count++;
        if(temp->data==ele){
           previous->Next = previous->Next->Next;
           delete temp;
           break;
        }

        previous = temp;
        temp = temp->Next;
    }

    return Head;
}


int main(){
    vector<int>arr = {1 , 3 , 5 , 6 , 7};
    Node* Head = Convert(arr);
    print(Head);
    deleteindex(Head , 5);
    print(Head);
}