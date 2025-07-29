#include<iostream>
#include<vector>
using namespace std;

class Solution {

  public:

  int LastOccurence(vector<int>& arr, int n, int tar) {

    int st = 0;
    int end = n - 1;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tar) {
            ans = mid;
            st = mid + 1;  // move right to find last occurrence
        } else if (arr[mid] > tar) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;

  }

  int FirstOccurence(vector<int>&arr , int n , int tar){
    int st = 0;
    int end = n-1;
    int ans = -1;

    while(st <= end){

        int mid = st + (end - st)/2;
        
        if(arr[mid] == tar){
           ans = mid;
           end = mid - 1 ;
        }
        else if(arr[mid]>tar){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }

    }

    return ans;

  }

};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tar;
    cin >> tar;

    Solution obj;
    cout << obj.LastOccurence(arr, n, tar)<<" ";
    cout << obj.FirstOccurence(arr , n ,tar)<<endl;
    cout <<"Total Occurence: "<<(( obj.LastOccurence(arr, n, tar) - obj.FirstOccurence(arr , n ,tar) ) + 1); // this is the easoest formula for total number of occurence ( last index - first index) + 1;

    return 0;
}
