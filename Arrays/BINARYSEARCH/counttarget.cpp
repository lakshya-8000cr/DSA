#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {
    public:

    int occurence(vector<int>&arr , int n, int tar){
         int st = 0;
         int end = n - 1;
         int mid = st + (end - st)/2;
         int count = 0;

        while(st<=end){
            if(arr[mid]==tar){
                count = 1;

                int left = mid - 1;
                while(left>=0 && arr[left]==tar){
                    count++;
                    left--;
                }

                int right = mid + 1;
                while(right<n && arr[right]==tar){
                    count++;
                    right++;
                }

                break;
            }
            else if(arr[mid]>tar){
                    end = mid - 1;
            }
            else{
                st = mid + 1;
            }
         }

         return count; 
    }
};


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int tar ;
    cin>>tar;

    Solution obj;
    cout<<obj.occurence(arr , n , tar);
    return 0 ;
}

//ise ek aur tarike se kar skate hai 