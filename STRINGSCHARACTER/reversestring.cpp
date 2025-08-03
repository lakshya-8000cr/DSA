#include<iostream>
#include<string>
using namespace std ;

// int main(){
//     string name ;
//     cout<<"Enter The Name: ";
//     getline(cin,name);

//     int len = name.length();

//     for(int i = len-1 ; name[i]>0; i--){
//         cout<<name[i];
//     }

// }

int main(){
    string name ;
    cout<<"Enter The Name: ";
    getline(cin,name);

    int len = name.length();
    int st = 0;
    int end = len - 1;

    while(st<=end){
        swap(name[st],name[end]);
        st++;
        end--;
    }
    cout<<name;
} // this is we called two pointer approach in coding; 
//in case of character we use size to und length 
//incase of string we use length to find lenght 