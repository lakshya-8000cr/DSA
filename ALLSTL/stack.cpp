// jpo last me jayega wo sabse pehle aega bahar this is concept of stack; // this is data structure i will show l
#include<iostream>
#include<stack>

using namespace std ;

int main(){
    stack<string> s;

    s.push("Lakshya");
    s.push("Chauhan");
    s.push("Hero hai"); //  yeh elemet humne sabse last me dala hai toh yeh sabse pehle hoga upar  acc to concept 

    cout<<s.top();
    
}