#include<iostream>
#include<string>

using namespace std ;

/// all about the characters and the string how to index 
/* 

Char → Index (for arrays like arr[26])

int index = ch - 'a';  // 'a' → 0, 'b' → 1

// Index → Char

char ch = 'a' + index;  // 0 → 'a', 1 → 'b'l

// Char digit → int

int num = ch - '0';     // '7' → 7

// Int → char digit

char ch = '0' + num;    // 7 → '7'

*/;

class solution{
    public:
    
    char indextochar(int n){
         char ch = n + 'a';
         return ch;
    }

    int charindex(char ch){
         int index = ch - 'a';
         return index;
    }

    
};


int main(){
    int ch ;
    cin>>ch;
    char c;
    cin>>c;

    solution obj;
    
    //character to index ;
    // int index = ch - 'a';
    // cout<<ch<<":"<<index;
    char result = obj.indextochar(ch);
    cout<<result<<endl;

    int index = obj.charindex(c);
    cout<<index;

    return 0;
}