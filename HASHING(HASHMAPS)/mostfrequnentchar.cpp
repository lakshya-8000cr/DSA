#include<iostream>
#include<string>

using namespace std ;

int main(){
    string s;
    getline(cin , s);

    int hash[26] = {0};
    int len = s.length();

    for(int i=0; i<len; i++){
        char ch = s[i];
        int index = ch - 'a';
        hash[index]++;
    }

    int max = 0;
    char ch ;

    for(int i=0; i<len; i++){
        if(hash[i]>max){
            max = hash[i];
            ch = 'a' + i;
        }
    }

    cout<<ch<<":"<<max;
}