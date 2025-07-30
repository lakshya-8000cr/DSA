#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    vector<int> Removeduplicate(vector<int>& arr, int n) {
        int flag = 1000000;
        int count = 0;

        for(int i = 0; i < n; i++) {
            count = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    if(count > 2) {
                        arr[j] = flag;
                    }
                }
            }
        }

        vector<int>result;

        for(int i = 0; i < n; i++) {
            if(arr[i]!=flag){
                result.push_back(arr[i]);
            }
        }

        return result ; 
    }
};

int main() {
    int n;
    cin >> n;
     
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int>result =  obj.Removeduplicate(arr, n);  // agar upar se array print karana hai toh aise kar sakte hai 
    
    for(auto val : result){
        cout<<val<<" ";
    }

    return 0;
}
