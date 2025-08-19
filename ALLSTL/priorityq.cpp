#include<iostream>
#include<queue>

using namespace std ;

int main(){
    priority_queue<int> q; // sabse pehle sabse bads element aega bahra like descending order 

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    int n = q.size();

    for(int i=0; i<n; i++){
        cout<<q.top()<<" ";
        q.pop();
    }
}