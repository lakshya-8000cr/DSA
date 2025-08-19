#include<iostream>
#include<string>

using namespace std ;

class Solution {
    public:

    string ReplacesChar(string name){
        int len = name.length();
        string result ;

        for(int i=0; i<len; i++){
            if(name[i]==' '){
               result += "@40";
            }
            else{
                result += name[i];
            }
        }

        return result ;
    }
};


int main(){
    string name ;
    getline(cin , name);

    Solution obj;
    cout<<obj.ReplacesChar(name);
    return 0;
}