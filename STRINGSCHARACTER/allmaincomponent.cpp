// in this we will get to know what are the string methods and hpw to use them in questions;
//like substrings , erase , find and how to use them correctly 
#include<iostream>
#include<string>
using namespace std ;

int main(){
    string name ;
    getline(cin , name);

    int len = name.length();

    if(len>12){
        cout<<"Dont add more than 12";
    }

    if(name.empty()){
        cout<<"Please enter anything oltherwise goth baddie will sit on your face";
    }

    // name.clear();
    // cout<<"your name is : "<<name;

    string email = name.append("@220gmail.com"); // append will add one string to another string ;
    cout<<email<<endl;

    char ch = name.at(1);
    cout<<ch;

    // insert add anything anywhere at any index ;
    name.insert(0,"@"); // this will add @ to the starting position of the string

    string str = name.substr(0,3);
    cout<<str<<endl;

    cout<<name;

    return 0;
}