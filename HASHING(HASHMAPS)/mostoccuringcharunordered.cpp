#include<iostream>
#include<unordered_map>

using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int , int>map;

    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }

    int max = 0;
    int index = 0;
    for(auto i:map){
        if(i.second>max){
            max = i.second;
            index = i.first;
        }
    }

    cout<<index<<":"<<max;

    return 0;

}