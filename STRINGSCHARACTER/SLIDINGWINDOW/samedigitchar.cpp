#include<iostream>
#include<string>

using namespace std ;

class Solution {
    public:

    string Largest(string s){
        int len = s.length();
        string ans = "";

        for(int i=0; i<= len - 3; i++){
            if(s[i]==s[i+1] && s[i]==s[i+2]){
                string sub = s.substr(i , 3);
                if(sub>ans){
                    ans = sub ;
                }
            }
        }

        return ans ;
    }
};

int main(){
    string s ;
    getline(cin,s);

    Solution obj;
    cout<<obj.Largest(s);
    return 0;
}