// topic jise ma dhundh raha tha itne time se;
#include<iostream>
#include<list>

using namespace std ;

int main(){
    list<int> l;
    l.push_back(8);
    l.push_front(9);

    for(int i : l){
        cout<<i;
    }

    l.pop_back();
    for(int i : l){
        cout<<i;
    }
    return 0;
}