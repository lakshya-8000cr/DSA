// the concept is jo sabse pehle aya usi ko khana milega aur delete bhi wahi higa sabse pehle 
//this is concept of queue;

#include<iostream>
#include<queue>
#include<stack>

using namespace std ;

int main(){
    queue<string> q;
    stack<string> s;

    q.push("Lakshya");
    q.push("Chauhan");
    q.push("Hero hai");

    s.push("Lakshya");
    s.push("Chauhan");
    s.push("Hero hai");

    cout<<"Queue me aiuse aega: "<<q.front()<<endl; // jo sabse pehle gaya usko mil jayega;
    cout<<"stack me aiuse aega: "<<s.top()<<endl; // see sabse last me jo gaya hai wo sabse pehle printhoga 
}