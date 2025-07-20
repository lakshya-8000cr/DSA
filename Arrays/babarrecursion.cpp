#include<iostream>
using namespace std ;

void reverse(int arr[] , int st , int end ){
    
    if(st>=end){
        return  ;
    }

    swap(arr[st],arr[end]) ;
    reverse(arr , st +1, end - 1);
};

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int st = 0;
    int end = n-1;

    reverse(arr,st,end);
    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}