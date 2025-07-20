#include<iostream>
using namespace std ;

void alternativeReverse(int arr[] , int n){

    int st = 0, end = 1;
    while(st < n && end < n){
        swap(arr[st], arr[end]);
        st += 2;
        end += 2;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
};

int main(){
    int n;
    cin>>n ;
    int arr[1000];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    alternativeReverse(arr,n);
    return 0;
}