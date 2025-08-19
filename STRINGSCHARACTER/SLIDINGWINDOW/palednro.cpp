#include<iostream>
#include<string>

using namespace std;

bool isPalen(int st , int end , string s){
    string str = s;

    while(st<end){
        swap(str[st++] , str[end--]);
    }

    if(str==s){
        return true;
    }

    return false;
}

int main(){
    string s;
    getline(cin, s);
    int st = 0;
    int n = s.length();
    int end = n - 1;

    if(isPalen(st , end , s)){
        cout<<"palendrom";
    }
    else{
        cout<<"Not palendrom";
    }

    
    return 0;
}