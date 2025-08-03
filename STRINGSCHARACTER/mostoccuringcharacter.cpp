#include<iostream>
#include<string>

using namespace std ;

class Solution {
    public:

    char MostOccuring(string s){
        int arr[26] = {0};
        int len = s.length();

        for(int i=0; i<len; i++){
            char ch = s[i];
            if(ch>='a' && ch<='z'){
                arr[ch - 'a']++;
            }
        }

        for(int i=0; i<26; i++){
            if(arr[i]>0){
                char ch = 'a' + i;
                cout<<ch<<":"<<arr[i]<<endl;
            }
        }
    }
};

int main(){
    string name ;
    getline(cin,name);

    Solution obj;
    obj.MostOccuring(name);
    return 0;
}