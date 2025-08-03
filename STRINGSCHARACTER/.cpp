#include<iostream>
#include<string>
using namespace std ;

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length()-1;
        

        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
                return true ;
            }
        }

        return false;
    }
};


int main(){
    string s ;
    getline(cin,s);
    Solution obj;
    cout<<obj.isPalindrome(s);
    return 0;
}

