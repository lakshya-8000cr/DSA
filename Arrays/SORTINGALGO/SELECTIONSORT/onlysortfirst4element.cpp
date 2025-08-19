#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Soltuion {
    public: 

    void OnlyFour(vector<int>&arr , int n , int l){
        int i;
        //  this is where you can sort accoording to you like if you want only first 4 element to be sorted then use this ;
        for(i = 0; i<l; i++){
            int minIndex = i;
            for(int j = i+1; j<l ; j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }

            swap(arr[minIndex] , arr[i]);
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int l;
    cin>>l;
    Soltuion obj;
    obj.OnlyFour(arr , n , l);
    return 0;

}