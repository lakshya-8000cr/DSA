#include<iostream>
#include<string>
#include<map>

using namespace std ;

int main(){
    string s;
    getline(cin,s);
    int len = s.length();

    map<char,int>mpp;

    for(int i=0; i<len; i++){
        char ch = s[i];
        mpp[ch]++;
    }

    int max = 0;
    char ch ;

    for(auto i : mpp){
        if(i.second>max){
            max = i.second;
            ch = i.first;
        }
    }

    cout<<ch<<":"<<max;

    return 0;
}