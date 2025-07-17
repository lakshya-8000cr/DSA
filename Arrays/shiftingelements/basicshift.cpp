#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    // now we want to delete the element ;
    int del ;
    cin>>del;
    for(int i=del; i<n-1;i++){
        arr[i]=arr[i+1]; // thats how we are shifting and removing the element 
    } 
    n--; //recuced the array to the n-1 becasue we want to react the same array size of array ;

    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}