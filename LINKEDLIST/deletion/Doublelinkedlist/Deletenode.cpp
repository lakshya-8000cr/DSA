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


void Deletnode(Node* temp){
    Node* Prev = temp->Back;
    Node* Front = temp->Next;
    if(Front==NULL){
         Prev->Next = nullptr;
         temp->Back = nullptr;
         free(temp);
         return;
    }
    // if()

    Prev->Next = Front;
    Front->Back = Prev;

    temp->Next = nullptr;
    temp->Back = nullptr;
    free(temp); // in void functions we dont use delete , in this we use free keyword

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
    //  Head = Deleteatindex(Head , 3);
     Print(Head);
     Deletnode(Head->Next);
     Print(Head);
     return 0;
}