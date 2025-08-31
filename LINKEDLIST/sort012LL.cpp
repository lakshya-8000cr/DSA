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


void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
}


Node* Sort(Node* Head){
    Node* temp = Head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0; // pointers so that we can get the count the no o 0 , 1 , 2;
    while(temp!=NULL){
        if(temp->data == 0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }
        else{
            count2++;
        }

        temp = temp->Next;
    }

    temp = Head;
    while(temp!=NULL){
        if(count0){
            temp->data = 0;
            count0--;
        }
        else if(count1){
            temp->data = 1;
            count1--;
        }
        else{
            temp->data = 2;
            count2--;
        }

        temp = temp->Next;
    }

    return Head;
}


int main(){
    vector<int>arr = {1, 0 , 1 , 2 , 0 , 2 , 1};
    Node* Head = Convert(arr);
    Head = Sort(Head);
    Print(Head);
    return 0;
}