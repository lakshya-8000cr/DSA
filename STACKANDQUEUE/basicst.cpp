#include<iostream>
using namespace std ;

class StackImplemen{
    public:
    int top = -1;
    int st[10] ;

    void push(int n){
        top = top + 1;
        st[top] = n;
    }

    void pop(int n){
        if(top==-1){
            cout<<"empty stack:";
        }
        top = top - 1;
    }

    int Top(){
        if(top==-1){
            cout<<"No element:";
        }
        return st[top];
    }

    int size(){
        return top + 1;
    }

};

int main(){
    StackImplemen obj;
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);

    cout<<obj.Top();
}