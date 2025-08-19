#include<iostream>
#include<vector>
#include<string>

using namespace std ;

int main(){
    string s ;
    getline(cin , s);

    int hash[26] = {0};
    int len = s.length();

    for(int i=0; i<len; i++){
        char ch = s[i];
        int index = ch - 'a';
        hash[index]++;
    }

    for(int i=0; i<26; i++){
        char ch = i + 'a';
        if(hash[i]>0){
        cout<<ch<<":"<<hash[i]<<endl;
        }
    }
}