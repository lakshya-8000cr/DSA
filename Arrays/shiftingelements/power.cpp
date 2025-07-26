#include<iostream>
using namespace std ;

int power(int base , int expo){
    int result = 1gti  ;

    while((expo--) != 0){
        result *= base;
    }

    return result;
}

int main(){
    int base ;
    cin>>base;
    int expo;
    cin>>expo;

    cout<<power(base,expo);
    return 0;
}