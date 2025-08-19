#include<iostream>
#include<string>
using namespace std ;

int main(){
    string name;
    getline(cin,name);
   
    int arr[26] = {0};

    int len = name.length();

    for(int i=0; i<len; i++){
        char ch = name[i];
        int index = ch - 'a';
        if(ch>='a' && ch<='z'){
            arr[index]++;
        }
    }

    int max = -1;
    int ans = 0;

    for(int i=0; i<26; i++){
        if(arr[i]>max){
            max = arr[i];
            ans = i;
        }
    }

    char c = ans + 'a';

    cout<<c;

}

// we can also add the strign character like array in another string;