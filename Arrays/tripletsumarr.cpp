#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> Triplet(vector<int>& arr, int n, int tar) {
        vector<vector<int>> ans;

        for(int i = 0; i < n - 2; i++) {
            for(int j = i + 1; j < n - 1; j++) {
                for(int k = j + 1; k < n; k++) {
                    if((arr[i] + arr[j] + arr[k]) == tar) {
                        ans.push_back({arr[i], arr[j], arr[k]});
                    }
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;
    vector<int> arr(n);   

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<vector<int>> result = obj.Triplet(arr, n, target);

    for(auto triplet : result){
        for(int x : triplet){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}



// sath hi sath new concepot hai     for(auto triplet : result) {
    //     for(int num : triplet) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }
 // range based for loops ;
/*  lets start this from basic ;

for(data type variable : container){
  // this will do ki ye container array ke har ek element ke iteration ke thru jaegi and use data type variable me save karegi ;
}

int arr[5] = {1,2,3,4,5};

for(int x : arr){
cout<<x<<" ";
}

behind the scene

for (int i = 0; i < nums.size(); i++) {
    int x = arr[i];
    cout << val << " ";
}
 

*/