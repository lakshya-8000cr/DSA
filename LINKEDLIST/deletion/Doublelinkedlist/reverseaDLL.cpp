#include<iostream>
#include<vector>
#include<stack>
using namespace std ;

class Node{
    public:
    int data;
    Node* Next ;
    Node* Back;

    public:
    Node(int data1, Node* Next1 , Node* Back1){
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
    Node* prev = Head;
    int n = arr.size();
    for(int i=1; i<n; i++){
        Node* Mover = new Node(arr[i] , nullptr , prev );
        prev->Next = Mover;
        prev = Mover;
    }

    return Head;
}


Node* Reversenodes(Node* Head){
    Node* temp = Head;
    Node* newHead = NULL;
    while (temp!=NULL){
         swap(temp->Next , temp->Back);
         newHead = temp;
         temp = temp->Back;
    }
    
    return newHead;
}


// void Reverse(Node* Head){
//      Node* temp = Head;
//      stack<int>st;
//      while(temp!=NULL){
//         st.push(temp->data);
//         temp = temp->Next;
//      }

//      temp = Head;
//      while(temp!=NULL){
//         temp->data = st.top(); // this is how we are reversing the data not the nodes of linked list ;
//         st.pop();
//         temp = temp->Next;
//      }

// };


void Print(Node* Head){

    Node* temp = Head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }

    cout<<endl;
}


int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 };
    Node* Head = Convert(arr);
    Print(Head);
    // Reverse(Head);
    // Print(Head);
    Head = Reversenodes(Head);
    Print(Head);
    return 0;
}
