#include<iostream>
#include<string>

using namespace std ;

int main(){
    string str;
    getline(cin,str);
    int len = str.length();

    cout<<str.length()<<endl;
    str.push_back('a');
    str.pop_back();

    cout<<str.substr(0,len)<<endl; // substring of the string
    cout<<str.find('lak');

}