#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = 0;
    int index = 0;
    int hash[259] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(hash[i]>max){
            max = hash[i];
            index = i;
        }
    }

    cout<<index<<":"<<max;
    return 0;
}
