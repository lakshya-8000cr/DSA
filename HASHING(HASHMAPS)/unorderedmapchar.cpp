#include<iostream>
#include<unordered_map>

using namespace std ;

int main(){
    string s;
    getline(cin,s);

    int len = s.length();

    unordered_map<char , int> hash;

    for(int i=0; i<len; i++){
        char ch = s[i];
        hash[ch]++;
    }

    for(auto i : hash){
        cout<<i.first<<":"<<i.second<<endl;
    }

    return 0;
}