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

Node* Deleteatindex(Node* Head , int k){
    int count = 0;
    Node* temp = Head;
    Node* previous = NULL;

    if(Head==NULL) return Head;
    
    if(k==1){
        Node* temp = Head;
        Head = Head->Next;
        delete temp;
        return Head;
    }

    count = 0;

    while(temp!=NULL){
        count++;
        if(count==k){
            previous->Next = previous->Next->Next;
            free(temp);
            break;
        }

        previous = temp;
        temp = temp->Next;
    }

    return Head;
}


int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    Node* Head = Convert(arr);
    Print(Head);
    Deleteatindex(Head , 4);
    Print(Head);

}