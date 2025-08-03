#include<iostream>
#include<string>

using namespace std;

int main(){
    char name[30];
    cout<<"Enter your name: ";
    
    cin>>name;
    name[3] = '\0';
    cout<<name;
    return 0;
}