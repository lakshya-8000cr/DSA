#include<iostream>
#include<vector>

using namespace std ;

int main(){
    vector<int>v ;

   
    cout<<"Capacity : "<<v.capacity(); // capacity batata hai ki kitne elements le sakta hai yeh aur size batata hai kitne elements hai abhi
    v.push_back(5);
    cout<<v.at(0);
    v.clear();
    cout<<v.size();
    return 0; 
}