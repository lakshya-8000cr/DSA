#include<iostream>
#include<vector>
using namespace std ;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = NULL;
    }
};

class Q {

    public:

    int size = 0;
    Node* start = NULL;
    Node* end = NULL;

    public:

    void push(int n){
         Node* temp = new Node(n);
         if(start == NULL){
            start = end = temp;
         }

         else{
            end->next = temp;
            end = temp;
         }

         size++;
    }

    public:



    void pop(){
        Node* temp = start;
        start = start->next;
        delete temp;
        size--;
    }

    int high(){
        return start->data;
    }

    int length(){
        return size;
    }

};

Node* Convert(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    int n = arr.size();
 
    for(int i=1; i<n; i++){
        Node* x = new Node(arr[i]);
        temp->next = x;
        temp = x;
    }

    return head;
}


void Print(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Q obj;
    obj.push(1);
    obj.push(4);
    obj.push(5);
   cout<< obj.high();
   obj.pop();
   cout<<obj.high();
}
