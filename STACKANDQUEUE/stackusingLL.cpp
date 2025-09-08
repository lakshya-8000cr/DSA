#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
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
class ST {
    public:
    int size = 0;
    Node* Top = NULL;

    push(int n){
        Node* x = new Node(x);
        x->next = Top;
        Top = x;
        size++;
    }

    void pop(){
        Node* temp = Top;
        Top = Top->next;
        delete temp;
        size--;
    }

    int up(){
        return Top->data;
    }

    int length(){
        return size;
    }
};


int main(){
    
}