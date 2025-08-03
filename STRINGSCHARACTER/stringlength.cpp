#include<iostream>
#include<string>

using namespace std ;

int main(){
    string name;
    getline(cin,name);
    int count = 0;

    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }

    

    cout<<count;
}