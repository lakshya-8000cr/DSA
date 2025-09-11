#include<iostream>
#include<stack>
using namespace std;

class valid {
public:
    bool validparenthesis(string s) {
        stack<char> St;  cd
        int len = s.length();

        for (int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                St.push(s[i]);
            }
            else {
                if (St.empty()) return false; 

                char ch = St.top();
                St.pop();

                if ((ch == '(' && s[i] != ')') ||
                    (ch == '[' && s[i] != ']') ||
                    (ch == '{' && s[i] != '}')) {
                    return false; 
                }
            }
        }

        return St.empty(); 
    }
};

int main() {
    valid V;
    string s;
    getline(cin, s);
    cout << (V.validparenthesis(s) ? "Valid" : "Invalid");
}
