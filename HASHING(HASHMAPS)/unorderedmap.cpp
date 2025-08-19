#include<iostream>
#include<unordered_map>

using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int,int> hash;

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(auto i : hash){
        cout<<i.first<<":"<<i.second<<endl; // the only diference is this is not sorted 
    }

    return 0;
}