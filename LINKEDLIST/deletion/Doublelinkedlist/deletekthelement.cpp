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
    Node* Prev = Head;
    int n = arr.size();

    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i] , nullptr , Prev);
        Prev->Next = temp;
        Prev = temp ; // to move forward afetre linking ;
    }

    return Head;
}


Node* DeletHead(Node* Head){

    if(Head==NULL || Head->Next==NULL){
        return NULL;
    }
    Node* Prev = Head;
    Head = Head->Next;
    Head->Back = nullptr;
    Prev->Next = nullptr;
    delete Prev;

    return Head;
}


Node* DeletTail(Node* Head){
    if(Head==NULL || Head->Next==NULL){
        return NULL;
    }

    Node* Prev = Head;
    while(Prev->Next->Next!=NULL){
        Prev = Prev->Next;
    }
    Node* temp = Prev->Next;
    temp->Back = nullptr;

    Prev->Next = nullptr;
    delete temp;

    return Head;
}


Node* Deleteatindex(Node* Head , int k){
    int count = 0;
    Node* temp = Head;

    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp = temp->Next;
    }

    Node* Front = temp->Next;
    Node* Prev = temp->Back;

    Prev->Next = Front;
    Front->Back = Prev;

    temp->Back = nullptr;
    temp->Next = nullptr;
    delete temp;

    return Head;
}


void Print(Node* Head){
    Node* temp = Head;
    while ((temp!=NULL))
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}

int main(){
     vector<int>v = {1 , 2 , 3 , 4 , 5 , 6};
     Node* Head = Convert(v);
    //  Print(Head);
    //  Head = DeletHead(Head);
    //  Print(Head);
    //  Head = DeletTail(Head);
    //  Print(Head);
     Head = Deleteatindex(Head , 3);
     Print(Head);
     return 0;
}