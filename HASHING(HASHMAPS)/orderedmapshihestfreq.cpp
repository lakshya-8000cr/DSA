#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int,int>mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int max = 0;
    int index = 0;

    for(auto i : mpp){
        if(i.first>max){
            max = i.first;
            index = i.second;
        }
    }

    cout<<index<<":"<<max;
}