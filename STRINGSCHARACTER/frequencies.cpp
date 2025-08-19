#include<iostream>
#include<string>

using namespace std ;

int main(){
    // in this we will see how frequecy worls in this;
    // int freq ;
    int arr[20] = {0};
    string name ;
    getline(cin,name);
    int len = name.length();

    for(int i=0; i<len; i++){
        int ch = name[i];
        
        
        if(ch>='a'&&ch<='z'){
            int index = ch - 'a';
            arr[index]++;
        }
    }

    for(int i=0; i<26; i++){
        if(arr[i]>0){
            char ch = 'a' + i;
            cout<<ch<<":"<<arr[i]<<endl;
        }
    }
}