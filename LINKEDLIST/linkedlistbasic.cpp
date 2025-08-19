#include<iostream>
#include<list>

using namespace std ;

struct Node {
    int data ;
    Node* Next;

    Node(int data1 , Node* Next1){
        data = data1;
        Next = Next1;
    }
};

int main(){
    Node* x = new Node(21 , nullptr);
    cout<<x->data; // so if we are using new keyword and using the Node* then and definign this type then we have to use -> this to get data 
    // cout<<x.data // as you can see error is coming so we cannot use this like x.data like clases and structrue
}