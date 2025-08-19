#include<iostream>
#include<string>

using namespace std ;

int main(){
    string name;
    getline(cin , name); // now we will use most usefull function find function which will help us to ind the substr inside the string 

   string str2;
   getline(cin , str2); // ye hum isliye le rahe hai ki str2 ko search karege yeh name ke andar;

   int index = name.find(str2);
   cout<<index<<endl;

   // clear function will help us to clear the particular portion ;
   name.erase(0,2); // this will erase the part before 2 like it will erase theindex 0 and 1;9780
   cout<<name;
}