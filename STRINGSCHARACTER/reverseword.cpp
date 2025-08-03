#include<iostream>
#include<string>
using namespace std ;

int main(){
    string name ;
    getline(cin,name);

    int st = 0;
    int end = name.length() - 1;

    while(st<end){
        if(name[st]==' '){
            st++;
            continue;
        }
        if(name[end]==' '){
            end--;
            continue;
        }

        swap(name[st] , name[end]);
        st++;
        end--;
    }

    cout<<name;
    return 0;
}