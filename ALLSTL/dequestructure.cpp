#include<iostream>
#include<deque>

using namespace std ;

int main(){
deque<int>d;

d.push_front(6);
d.push_back(5);

for(int i : d){
    cout<<i;
}
d.pop_back();

for(int i : d){
    cout<<i;
}

}