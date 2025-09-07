#include<iostream>
using namespace std ;

class Q {
    public:
    int st = -1;
    int end = -1;
    int currentsize = 0;
    int size = 10 ;
    int q[10];

    void push(int n){
        if(currentsize==size){
            cout<<"Already full";
        }

        if(currentsize==0){
            st = 0;
            end = 0;
        }

        else{
            end = (end + 1) % size;
        }

         currentsize++;
         q[end] = n;
    }


    void pop(){
        if(currentsize==0){
            cout<<"Dont have anything:";
        }
        if(currentsize==1){
            st = end = - 1;
            currentsize =  0;
        }
        else{
            st = (st+1) % size;
            currentsize--;
        }
    }


    int TOP(){
        if(currentsize==0){
            cout<<"No element:";
        }
        return q[st];
    }


    int Size(){
        return currentsize;
    }
};

int main(){
    Q obj;
    obj.push(1);
     obj.push(2);
      obj.push(3);
       obj.push(4);

       cout<<obj.TOP();
    obj.pop();
}