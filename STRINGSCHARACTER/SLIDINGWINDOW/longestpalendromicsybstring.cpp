#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 1, start = 0;

        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                if (isPalindrome(s, l, r) && (r - l + 1) > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
            }
        }
        return s.substr(start, maxLen);
    }
};

int main() {
    string s;
    getline(cin, s);
    Solution obj;
    cout << obj.longestPalindrome(s) << endl;
    return 0;
}

// string s → pass by value.

// This copies the entire string into a new variable s inside the function.

// Since isPalendrom() is called O(n²) times, you’re making millions of string copies for big inputs.

// Each copy costs O(n) time and O(n) memory. That’s why Memory Limit Exceeded happens.
